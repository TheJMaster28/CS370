%include "io64.inc"
        common a 8              ; globel variable
        common b 800            ; globel variable
        common c 8              ; globel variable
        common d 8              ; globel variable

section .data


section .text
        global main


main:                   ;Start of functiuon
        mov     rbp, rsp                ;special RSP to RSB for main only
        mov     r8, rsp         ;FUNC header RSP har to be at most RBP
        add     r8, -72         ;adjust stack pointer oractivatio record
        mov     [r8], rbp               ;Storing old BP
        mov     [r8 + 8], rsp           ;storing old SP
        mov     rsp, r8         ;set new SP

        mov     rax, 1          ;puts value into result
        mov     [rsp + 24], rax         ;put result for LHS into temp
        mov     rax, [ rsp + 24 ]               ;move stored LHS back into rax
        cmp     rax, 0          ;NOT Rax
        jne     _L0             ;goto true statment
        mov     rax, 1          ;RAX is true ,se it to false
        jmp     _L1             ;goto false statment
_L0:    mov     rax, 0          ;RAX is false, set it to true
_L1:
        mov     [ rsp + 24 ], rax               ;store rax back to expr location
        mov     rbx, [ rsp + 24 ]               ;grab RHS value
        mov     rax, 16         ;get ident offset
        add     rax, rsp                ;add to stack pointer
        mov     [ rax ], rbx            ;store RBX into identfier
        mov     rax, 12         ;puts value into result
        mov     [rsp + 32], rax         ;put result for LHS into temp
        mov      rbx, 2         ;puts value into result
        mov     rax, [ rsp + 32 ]               ;move stored LHS back into rax
        idiv    rax, rbx                ;divde LHS and RHS
        mov     [ rsp + 32 ], rax               ;store rax back to expr location
        mov     rax, [ rsp + 32 ]               ;gets temp address for result
        mov     [rsp + 40], rax         ;put result for LHS into temp
        mov      rbx, 4         ;puts value into result
        mov     rax, [ rsp + 40 ]               ;move stored LHS back into rax
        imul    rax, rbx                ;multply LHS and RHS
        mov     [ rsp + 40 ], rax               ;store rax back to expr location
        mov     rax, [ rsp + 40 ]               ;gets temp address for result
        mov     [rsp + 48], rax         ;put result for LHS into temp
        mov      rbx, 3         ;puts value into result
        mov     rax, [ rsp + 48 ]               ;move stored LHS back into rax
        add     rax, rbx                ;add LHS and RHS
        mov     [ rsp + 48 ], rax               ;store rax back to expr location
        mov     rax, [ rsp + 48 ]               ;gets temp address for result
        mov     [rsp + 56], rax         ;put result for LHS into temp
        mov      rbx, 1         ;puts value into result
        mov     rax, [ rsp + 56 ]               ;move stored LHS back into rax
        sub     rax, rbx                ;subtact LHS and RHS
        mov     [ rsp + 56 ], rax               ;store rax back to expr location
        mov     rbx, [ rsp + 56 ]               ;grab RHS value
        mov     rax, c          ;gets globel variabel value
        mov     [ rax ], rbx            ;store RBX into identfier
        mov     rax, 16         ;get ident offset
        add     rax, rsp                ;add to stack pointer
        mov     rax, [rax]              ;puts memory address into result
        mov     [rsp + 64], rax         ;put result for LHS into temp
        mov     rax, [ rsp + 64 ]               ;move stored LHS back into rax
        cmp     rax, 0          ;NOT Rax
        jne     _L2             ;goto true statment
        mov     rax, 1          ;RAX is true ,se it to false
        jmp     _L3             ;goto false statment
_L2:    mov     rax, 0          ;RAX is false, set it to true
_L3:
        mov     [ rsp + 64 ], rax               ;store rax back to expr location
        mov     rsi, [ rsp + 64 ]               ;set result to rsi
        PRINT_DEC 8, rsi                ;print to output

                        ;End of function
        mov     rbp, [rsp]              ;Func end restore BP
        mov     rsp,[rsp + 8]           ;FUNC restoer old SP
        mov     rsp, rbp                ;stack and BP need to be same on exit for main
        xor     rax, rax                ;no value specificate, then it is 0
        ret
