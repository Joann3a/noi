DIM AS INTEGER N,I,J,S,F,L
INPUT "N=";N
DIM AS INTEGER A(N,2)
FOR I=1 TO N
    INPUT A(I,2)
NEXT I
DIM AS INTEGER B(N)
FOR I=0 TO N:B(I)=0:NEXT I
DO WHILE B(0)=0
    F=-1
    FOR I=1 TO N
        S=0
        IF I<>N THEN
            FOR J=I-1 TO I+1
                S=S+B(J)    
            NEXT J
        ELSE
            S=B(I-1)+B(I)
        END IF
        IF S<>A(I,2) THEN F=0
    NEXT I
    IF F=-1 THEN
        L=0
        FOR I=1 TO N
            PRINT B(I);
            L=L+B(I)
        NEXT I
        PRINT:PRINT "L=";L
    END IF
    J=N
    DO WHILE B(J)=1
        J=J-1
    LOOP
    B(J)=B(J)+1
    FOR I=J+1 TO N
        B(I)=0
    NEXT I    
LOOP
SLEEP
