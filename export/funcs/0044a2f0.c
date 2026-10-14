
undefined4 __thiscall FUN_0044a2f0(int param_1,code *param_2)

{
  code cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x818) < 1) {
    return 0;
  }
  piVar6 = (int *)(param_1 + 0x618);
  do {
    pcVar2 = *(code **)(*piVar6 + 0x3c);
    pcVar5 = param_2;
    if (*(code **)(*piVar6 + 0x3c) == (code *)0x0) {
      pcVar2 = _C_exref;
    }
    do {
      cVar1 = *pcVar2;
      bVar7 = (byte)cVar1 < (byte)*pcVar5;
      if (cVar1 != *pcVar5) {
LAB_0044a34a:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0044a34f;
      }
      if (cVar1 == (code)0x0) break;
      cVar1 = pcVar2[1];
      bVar7 = (byte)cVar1 < (byte)pcVar5[1];
      if (cVar1 != pcVar5[1]) goto LAB_0044a34a;
      pcVar2 = pcVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != (code)0x0);
    iVar3 = 0;
LAB_0044a34f:
    if (iVar3 == 0) {
      return *(undefined4 *)(param_1 + 0x618 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    if (*(int *)(param_1 + 0x818) <= iVar4) {
      return 0;
    }
  } while( true );
}

