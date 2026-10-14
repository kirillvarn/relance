
/* WARNING: Removing unreachable block (ram,0x0051ed71) */

void FUN_0051ed20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_006752f8;
  do {
    puVar1 = (undefined4 *)*puVar3;
    for (puVar4 = (undefined4 *)puVar3[-1]; puVar4 < puVar1; puVar4 = puVar4 + 1) {
      free((void *)*puVar4);
    }
    uVar2 = puVar3[-1];
    if ((uVar2 != 0) && ((int)(*puVar3 - uVar2) >> 2 != 0)) {
      *puVar3 = uVar2;
    }
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x675348);
  return;
}

