DECLARE FUNCTION mypri(BYVAL y AS INTEGER)AS INTEGER

DIM AS INTEGER N,X,Y,P,S,F,I,J
INPUT n
DIM AS INTEGER a(n,n),used(n*n)
x=1 : y=1 : p=1
DO
    s=0
    FOR i=a(x,y)+1 TO n*n
        f=0
        IF a(x-1,y)<>0 AND mypri(a(x-1,y)+i)<>0 THEN f=1
        IF a(x,y-1)<>0 AND mypri(a(x,y-1)+i)<>0 THEN f=1
        IF f=0 AND used(i)=0 THEN
            s=i
            EXIT FOR
        END IF
    NEXT i
    IF s<>0 THEN
        used(a(x,y))=0
        used(s)=1
        a(x,y)=s
        IF y<n THEN y=y+1 ELSE y=1:x=x+1
        p=p+1
    ELSEIF s=0 THEN
        used(a(x,y))=0
        a(x,y)=0
        IF y>1 THEN y=y-1 ELSE y=n:x=x-1
        p=p-1
    END IF
LOOP UNTIL p=0 OR p>n*n

IF p>n*n THEN
    FOR i=1 TO n
        FOR j=1 TO n
            PRINT USING "###";a(i,j);
        NEXT j
        PRINT
    NEXT i
ELSE
    PRINT "No way."
END IF
SLEEP
END

FUNCTION mypri(BYVAL y AS INTEGER)AS INTEGER
    DIM AS INTEGER  F,I
    f=0
    FOR i=2 TO SQR(y)
        IF y MOD i=0 THEN f=1
    NEXT i
    IF y=1 THEN f=1
    mypri=f
END FUNCTION
