DECLARE SUB try (i AS INTEGER)
DIM SHARED like(5, 5) AS INTEGER ' {���˶Ը������ϲ�����}
DIM SHARED nam(5) AS STRING    '{����name���ѧ������}
DIM SHARED book(5) AS INTEGER   '{��Ÿ��˷��䵽����ı��}
DIM SHARED f(5) AS INTEGER
DIM SHARED i AS INTEGER
DIM SHARED c AS INTEGER

FOR i = 1 TO 5
    f(i) = 0
NEXT i
FOR i = 1 TO 5
  book(i) = 0
NEXT i
OPEN "02-08.txt" FOR INPUT AS #1
FOR i = 1 TO 5
    FOR j = 1 TO 5
        INPUT #1, like(i, j)
    NEXT j
NEXT i
FOR i = 1 TO 5
    INPUT #1, nam(i)
NEXT i
c = 0
try(1)
SLEEP
END

SUB try (i AS INTEGER) '{�жϵ� I ��ѧ���ֵ���ı��}
FOR j = 1 TO 5
    IF f(j) = 0 AND (like(i, j) > 0) THEN
        '{��j����δѡ�����ҵ�I��ѧ��ϲ����j����}
        f(j) = 1          '{�޸���ѡ���ż��ϣ������j����}
        book(i) = j       '{��¼�� I ��ѧ���ֵ���ı��}
        s = 0
        FOR t = 1 TO 5
            s = s + f(t)
        NEXT t
        IF s = 5 THEN
            c = c + 1
            PRINT "answer"; c; ":"
            FOR k = 1 TO 5
                PRINT nam(k), CHR$(64 + book(k))
            NEXT k    '{k = 5,5 ��ѧ�����ֵ��Լ�ϲ������}
            PRINT
        ELSE
            try(i + 1) '{i<5,����������һ��ѧ�����ֵܷ�������}
        END IF
        f(j) = 0  '{����һ�����Ա������һ�ַ��䷽��}
        book(i) = 0
    END IF
NEXT j
END SUB
