DECLARE FUNCTION PRIME(X AS INTEGER)AS INTEGER

INPUT "N,K=";N,K
DIM AS INTEGER A(N),B(K)
FOR I=1 TO N
    A(I)=INT(RND*90)+10
    PRINT A(I);
NEXT I
PRINT
FOR I=0 TO K:B(I)=I:NEXT I
T=0
DO WHILE B(0)=0
    S=0
    FOR I=1 TO K
        S=S+A(B(I))
    NEXT I
    IF PRIME(S)=-1 THEN T=T+1
    J=K
    DO WHILE B(J)=N-K+J
        J=J-1
    LOOP
    B(J)=B(J)+1
    FOR I=J+1 TO K
        B(I)=B(I-1)+1
    NEXT I
LOOP
PRINT "T=";T
SLEEP

FUNCTION PRIME(X AS INTEGER)AS INTEGER
    PRIME=-1
    FOR I=2 TO SQR(X)
        IF X MOD I=0 THEN PRIME=0:EXIT FOR
    NEXT I
    IF X=1 THEN PRIME =0
END FUNCTION 