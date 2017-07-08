DIM AS INTEGER I,J,N,K,P,Q
INPUT "N=";N
DIM AS INTEGER A(N)
FOR I=1 TO N
    A(I)=I-1
NEXT I
A(0)=0
DO WHILE A(0)=0
    IF A(1)<>0 AND A(N)<A(N-1) THEN
        T=T+1
        FOR I=1 TO N
            PRINT USING "#";A(I);
        NEXT I
        PRINT "   ";
    END IF   
    
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
PRINT 
PRINT T
SLEEP
