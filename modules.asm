.model small, C
public Fun1
public Fun2

.data
licznik1 dw 0
licznik2 dw 0
.code
Fun1 proc
push bp
mov bp, sp
mov si, [bp + 4]
mov cx, [bp + 6]
mov licznik1, cx
fldz
sumuj: 
fadd QWORD PTR [si]
add si, 8
loop sumuj
fidiv licznik1
pop bp
ret
Fun1 endp



Fun2 proc
push bp
mov bp, sp
mov si, [bp + 4]
mov dx, [bp + 6]
mov cx, [bp + 8]
jmp sprawdz

sprawdz:
cmp dl, [si]
jne skok
add licznik2, 1
add si, 1
loop sprawdz
jmp koniec

skok:
add si, 1
sub cx, 1
cmp cx, 0
je koniec
jmp sprawdz


koniec:
mov ax, licznik2
pop bp
ret
Fun2 endp
end