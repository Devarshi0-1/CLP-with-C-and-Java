Data segment
cr equ 0dh
lf equ 0ah
msg db cr,lf, "Hi My Name is Devarshi Dwivedi", '$'
msg1 db cr, lf, "I am Persuing CSE from Manav Rachna University", '$'
data ends
code segment
start
assume cs:Code, ds:Datamov 
start:
mov ax,Data
mov ds, ax
mov ah, 09h
mov dx, offset msg
int 21h

mov ah, 09h
mov dx, offset msg1
int 21h

mov ah, 4ch
mov al, 00h
code ends