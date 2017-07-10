DIM AS INTEGER I,J,S,K,P,Q,A(4),B(3)
DIM AS STRING C(2)
FOR I=1 TO 4
    INPUT A(I)
    B(I-1)=0
NEXT I
C(0)="+":C(1)="-":C(2)="*"
FOR I=1 TO 3
    FOR J=I+1 TO 4
        IF A(I)>A(J) THEN SWAP A(I),A(J)
    NEXT J
NEXT I
A(0)=0
DO WHILE A(0)=0
    FOR I=0 TO 3:B(I)=0:NEXT I
    DO WHILE B(0)=0
        S=A(1)
        FOR I=1 TO 3
            IF B(I)=0 THEN
                S=S+A(I+1)
            ELSEIF B(I)=1 THEN
                S=S-A(I+1)
            ELSEIF B(I)=2 THEN 
                S=S*A(I+1)
            END IF
        NEXT I
        IF S=24 THEN
            PRINT A(1);
            FOR I=1 TO 3
                PRINT C(B(I));A(I+1);
            NEXT I
            PRINT "=24"
        ENDIF 
        J=3
        DO WHILE B(J)=2:B(J)=0:J=J-1:LOOP
        B(J)=B(J)+1
    LOOP 
    K=4
    DO WHILE A(K-1)>=A(K):K=K-1:LOOP
    J=4
    DO WHILE A(K-1)>=A(J):J=J-1:LOOP
    SWAP A(K-1),A(J)
    FOR P=K TO 3
        FOR Q=P+1 TO 4
            IF A(P)>A(Q) THEN SWAP A(P),A(Q)
        NEXT Q
    NEXT P
LOOP
SLEEP

