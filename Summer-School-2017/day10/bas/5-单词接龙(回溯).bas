DIM AS INTEGER N,I,J,K,TOP,LMAX,L,F(N),STACK(N)
DIM AS STRING FN,A(N)
INPUT FN
OPEN FN FOR INPUT AS #1
INPUT #1,N
FOR I=1 TO N
    INPUT #1,A(I)    
NEXT I

LMAX=1   '��ͷ
L=1
FOR I=1 TO N
    F(I)=0  '���ʱ�־��ֻ����һ�Σ�0��ʾû�ù���1��ʾ�ù���
NEXT I
F(1)=1     ' ��ʼ��
STACK(1)=1   ' ջ��
TOP=1
K=1          'λ��(����)
WHILE TOP>=1 
    K=K+1
    IF K>N THEN   '�������
        K=STACK(TOP)   '����
        TOP=TOP-1
        L=L-1
        F(K)=0        'û����
    ELSE
        IF F(K)=0 AND MID(A(STACK(TOP)),2,1)=MID(A(K),1,1) THEN
            L=L+1
            IF L>LMAX THEN
                LMAX=L
                F(K)=1   '���
                TOP=TOP+1
                STACK(TOP)=K
                K=1    'λ��
            END IF
        END IF
    END IF
WEND
PRINT LMAX
CLOSE #1
SLEEP
END
               