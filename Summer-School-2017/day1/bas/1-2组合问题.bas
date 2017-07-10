DIM AS INTEGER N,M,S,I,J
INPUT "N,M=";N,M 
DIM AS INTEGER A(N) 
S=0
FOR I = 0 TO M
    A(I) = I
NEXT I
DO WHILE A(0)=0
    S = S + 1 
    PRINT S;":";
    FOR I = 1 TO M
        PRINT A(I); "  "; 
    NEXT I
    PRINT
    
    J = M
    DO WHILE A(J)=N-M+J
       J = J - 1
    LOOP
    
    A(J) = A(J)+1
    
    FOR I = J + 1 TO M
        A(I) = A(I-1)+1
    NEXT I
LOOP
PRINT "S=";S
SLEEP
END
