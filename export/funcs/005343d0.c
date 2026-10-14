
char __thiscall FUN_005343d0(int param_1,int *param_2,ushort param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc4);
  puVar2 = (undefined4 *)*puVar1;
  cVar3 = '\0';
  while ((puVar2 != puVar1 && (cVar3 == '\0'))) {
    if (puVar2[3] == *param_2) {
      cVar3 = '\x01';
      Fuse::UnBurn((Fuse *)(puVar2 + 2),param_3,param_4);
    }
    puVar2 = (undefined4 *)*puVar2;
  }
  return cVar3;
}

