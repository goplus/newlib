/* Default _exit implementation for ESP32 RISC-V chips.
 * This is separated from syscalls.c to allow easy replacement
 * with semihosting version for QEMU emulator support.
 */

void
__attribute__ ((noreturn))
_exit (int status)
{
    // refer to esp-idf, use an invalid instruction to make it panic
    asm("unimp");

    for (;;) {
        ;
    }
}
