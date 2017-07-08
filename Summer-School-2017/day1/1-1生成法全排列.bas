DIM AS INTEGER I,J,N,K,P,Q
INPUT "N=";N
DIM AS INTEGER A(N)
FOR I=0 TO N
    A(I)=I
NEXT I
DO WHILE A(0)=0
    FOR I=1 TO N
        PRINT USING "#";A(I);
    NEXT I
    PRINT "   ";
   
    K=N
    DO WHILE A(K)<=A(K-1)
        K=K-1 
    LOOP
    
    J=N
    DO WHILE A(J)<=A(K-1)
        J=J-1 
    LOOP
    
    SWAP A(K-1),A(J)
    
    FOR P=K TO N-1
        FOR Q=P+1 TO N
            IF A(P)>A(Q) THEN SWAP A(P),A(Q)
        NEXT Q
    NEXT P
LOOP
SLEEP
