.gba
.thumb
.open "test.gba", 0x8000000

.freespace
.importobj "build/linked.o"

.org 0x0806C3AC
ldr r3, =s86_open_shop|1
bx r3
.pool

.close
