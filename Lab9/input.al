int a, b[100], c;
int d;
boolean f;

int q ( int t, int f ) 
begin
    return t;
end

int fact ( int i )
begin
	if ( i <= 0 ) then return 1;
	return i * fact( i - 1 );
end

void foo ( void ) 
begin
    while d > 0 do
    begin
        d = d -1;
        write "hello d";
	end
	if (a < 0) then write "hello a";
	else 
	begin
        write "sq(a-2) = ";
        write fact(a-2);
    end
        
end

void main ( void ) begin
	read a;
	write "read a";
	write a;
	d = a;
	c = d * 2;
	write "d:";
	write d;
	write "c / 2 = d:";
	write ( c/2 );
	write "print 'hello d' for d times";
	foo();
	
	b[1*2*5] = fact(1);
	b[1] = fact(3);
	b[ b[2*5] + b[1] ] = fact( fact(1+1+fact(1)));
	write "b[7] : ";
	write b[7];
	if ( b[0] * 2 <= d ) then write "postive";
	else write "negitive";
	write "q:";
	write q(30, fact( q(1,1) ) );
	return;
end


