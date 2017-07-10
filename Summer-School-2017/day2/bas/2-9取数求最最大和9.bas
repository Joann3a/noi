DIM AS STRING FN
INPUT FN
OPEN FN+".IN" FOR INPUT AS #1
INPUT #1,N
DIM AS INTEGER A(N),B(N)
FOR I=1 TO N
    INPUT #1,A(I)
NEXT I

P=1
B(1)=1
S=A(B(1))
MAX=S
I=2
DO
    I=I+1
    IF I<=N THEN
        S=S+A(I)
        P=P+1
        B(P)=I
        I=B(P)+1
        IF S>MAX THEN MAX=S
    ELSE
        S=S-A(B(P))
        I=B(P)
        P=P-1
    END IF
LOOP UNTIL P<0
PRINT MAX
SLEEP
END    
