INPUT "N,M=";N,M
DIM AS INTEGER A(M)
FOR I=1 TO M
    A(I)=N-I+1
NEXT I
A(0)=0
DO WHILE A(0)=0
    S=S+1
    FOR I=1 TO M
        PRINT A(I);
    NEXT I:PRINT
    J=M
    DO WHILE A(J)=M-J+1
        J=J-1
    LOOP
    A(J)=A(J)-1
    FOR I=J+1 TO M
        A(I)=A(I-1)-1
    NEXT J
LOOP
PRINT "Total=";S
SLEEP
