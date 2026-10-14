
/* WARNING: Removing unreachable block (ram,0x0051fc24) */
/* WARNING: Removing unreachable block (ram,0x0051fc5c) */
/* WARNING: Removing unreachable block (ram,0x0051fc60) */

void FUN_0051fbc0(void)

{
  undefined4 *puVar1;
  uchar *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  Heap::Shrink((Heap *)&DAT_00675350);
  Heap::Shrink((Heap *)&DAT_00675340);
  puVar3 = &DAT_006752f8;
  do {
    puVar1 = (undefined4 *)*puVar3;
    for (puVar4 = (undefined4 *)puVar3[-1]; puVar4 < puVar1; puVar4 = puVar4 + 1) {
      free((void *)*puVar4);
    }
    puVar2 = (uchar *)puVar3[-1];
    if ((puVar2 != (uchar *)0x0) && ((int)(*puVar3 - (int)puVar2) >> 2 != 0)) {
      IDPMsgHandler::OnReceive((IDPMsgHandler *)(puVar3 + -2),puVar2,*puVar3);
      *puVar3 = (uint)puVar2;
    }
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x675348);
  puVar4 = &DAT_006752f8;
  do {
    *puVar4 = puVar4[-1];
    puVar4 = puVar4 + 4;
  } while ((int)puVar4 < 0x675348);
  return;
}

