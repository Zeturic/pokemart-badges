.gba
.thumb
.open "test.gba", 0x8000000

.org free_space
.importobj "build/src/relocatable.o"

.org _s86_open_shop_
.area 0x14, 0xFF
      ldr r3, =s86_open_shop|1
      bx r3
      .pool
.endarea

.close

.definelabel _s86_open_shop_, 0x0806C3AC