DECLARE FUNCTION YX(AB AS STRING) AS INTEGER
DIM AS STRING K
DATA "3*6+4*5^3-48/12"
'DATA "3+6*4^5-5-3-9-48/12"
READ K
L=LEN(K)
DIM AS STRING A(100),T,X(100),B(100),Y(100)

P=0:T=""
FOR I=1 TO L  '����һ����������������������ַ���a������
    IF MID(K,I,1)>="0" AND MID(K,I,1)<="9" THEN
        T=T+MID(K,I,1)
    ELSE
        P=P+1:A(P)=T:T=""
        P=P+1:A(P)=MID(K,I,1)
    END IF
    IF I=L THEN P=P+1:A(P)=T
NEXT I

J=0:C=0 '���������׺���ʽ���׺���ʽ
FOR I=1 TO P
   
    IF MID(A(I),1,1)>="0" AND MID(A(I),1,1)<="9" THEN ' j��b����ָ��  C��x����ջ��ָ��
        J=J+1:B(J)=A(I)  
 
    ELSE
        Q=YX(A(I))
        W=YX(X(C))                'q�ǵ�ǰ�ַ������ȼ���w��ջ���ַ������ȼ�
        
        IF Q>W THEN
            C=C+1:X(C)=A(I)            
        ELSE
            DO WHILE Q<=W
                J=J+1
                B(J)=X(C)
                C=C-1                
                Q=YX(A(I))
                W=YX(X(C))  
            LOOP
            C=C+1
            X(C)=A(I)            
        END IF        
    END IF
NEXT I
DO WHILE C>0 '���ջ�����з���
    J=J+1
    B(J)=X(C)
    C=C-1
LOOP
FOR I=1 TO J
    PRINT B(I);"  ";
NEXT I
PRINT
'----------
DIM AS INTEGER M,N,S '����������ջ���м���
C=0:S=0
FOR I=1 TO J
    IF MID(B(I),1,1)>="0" AND MID(B(I),1,1)<="9" AND A(I)<>"^" THEN
        C=C+1
        Y(C)=B(I)
    ELSE
        M=VAL(Y(C-1))
        N=VAL(Y(C))
        SELECT CASE B(I)
        CASE "+"
           S=M+N
           C=C-1
           Y(C)=STR(S)
        CASE "-"
           S=M-N
           C=C-1
           Y(C)=STR(S)
        CASE "*"
           S=M*N
           C=C-1
           Y(C)=STR(S)
        CASE "/"
           S=M/N
           C=C-1
           Y(C)=STR(S)
        CASE "^"
           S=M^N
           C=C-1
           Y(C)=STR(S)
        END SELECT
    END IF    
NEXT I


PRINT Y(1)

SLEEP
END
FUNCTION YX(AB AS STRING) AS INTEGER '�������ַ��ŵ����ȼ��������ȼ�ת��Ϊ���� 
    SELECT CASE AB
    CASE "+","-"
        YX=1
    CASE "*","/"
        YX=2
    CASE "^"
        YX=3
    CASE ELSE
        YX=0
    END SELECT
    
    
END FUNCTION
