
void __thiscall FUN_0047f3e0(int *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  char local_8;
  char local_7;
  char local_6;
  uint local_4;
  
  bVar2 = false;
  if (((char)param_1[0xd7] != '\0') && ((char)param_1[0x263] != '\0')) {
    bVar2 = true;
  }
  local_4 = 0;
  piVar6 = param_1 + 0x104;
  do {
    if ((param_2 <= param_1[0xf1] + local_4) || (bVar2)) {
      local_7 = '\x01';
      local_8 = '\x01';
    }
    else {
      local_7 = '\0';
      local_8 = '\0';
    }
    iVar5 = param_1[0xd8];
    local_6 = local_8;
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x6c) & 2) == 0)) {
      local_6 = '\x01';
    }
    bVar1 = true;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 0x978);
      if (iVar5 == 3) {
        if (param_1[0xcb] != 4) {
LAB_0047f486:
          bVar1 = false;
        }
      }
      else if ((iVar5 == 1) && (param_1[0xcb] == 4)) goto LAB_0047f486;
      if (iVar5 == 2) {
        bVar1 = false;
      }
    }
    if ((char)param_1[0xd7] != '\0') {
      bVar1 = false;
    }
    if ((int *)piVar6[-10] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[-10] + 0xa8))(1,local_8,0);
    }
    if ((int *)*piVar6 != (int *)0x0) {
      if ((local_6 != '\0') || (bVar1)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*(int *)*piVar6 + 0xa8))(1,uVar4,0);
    }
    if (((int *)piVar6[5] != (int *)0x0) && (local_8 != '\0')) {
      (**(code **)(*(int *)piVar6[5] + 0xa8))(1,local_8,0);
    }
    if ((int *)piVar6[0x14] != (int *)0x0) {
      if ((local_6 != '\0') || (bVar1)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*(int *)piVar6[0x14] + 0xa8))(1,uVar4,0);
    }
    if ((int *)piVar6[0x19] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[0x19] + 0xa8))(1,local_7,0);
    }
    if ((int *)piVar6[0x23] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[0x23] + 0xa8))(1,local_8,0);
    }
    if ((int *)piVar6[0x1e] != (int *)0x0) {
      if (((local_7 != '\0') || (param_1[0xcb] == 4)) || (param_1[0xcb] == 1)) {
        (**(code **)(*(int *)piVar6[0x1e] + 0xa8))(1,1,0);
      }
      if ((char)param_1[0xd7] == '\0') {
        cVar3 = FUN_004c4810();
        if (cVar3 == '\0') {
          (**(code **)(*(int *)piVar6[0x1e] + 0xa8))(2,1,0);
        }
      }
      else if (param_1[0x25e] != 2) {
        (**(code **)(*(int *)piVar6[0x1e] + 0xa8))(2,1,0);
      }
    }
    if (((piVar6[-5] != 0) && ((int *)piVar6[10] != (int *)0x0)) && (piVar6[0xf] != 0)) {
      (**(code **)(*(int *)piVar6[10] + 0xa8))(1,0,0);
      cVar3 = (char)((uint)unaff_ESI >> 8);
      (**(code **)(*(int *)piVar6[0xf] + 0xa8))(1,cVar3,0);
      (**(code **)(*(int *)piVar6[-5] + 0xa8))(1,0,0);
      (**(code **)(*(int *)piVar6[-5] + 0xa8))(2,cVar3,0);
      (**(code **)(*(int *)piVar6[10] + 0xa8))(2,cVar3,0);
      if (cVar3 != '\0') {
        (**(code **)(*(int *)piVar6[-5] + 0xa8))(3,0,0);
        (**(code **)(*(int *)piVar6[10] + 0xa8))(3,0,0);
      }
    }
    local_4 = local_4 + 1;
    piVar6 = piVar6 + 1;
    if (4 < local_4) {
      if ((param_1[0x25c] != 0) && (param_1[0x25b] != 0)) {
        bVar2 = false;
        iVar5 = FUN_0047e790();
        if ((iVar5 != 0) && (*(char *)(iVar5 + 0x18) != '\0')) {
          bVar2 = true;
        }
        if (((((param_1[0xcb] == 4) && (param_1[0xe9] != -1)) && (!bVar2)) &&
            (cVar3 = (**(code **)(*param_1 + 0xb8))(), cVar3 == '\0')) &&
           ((param_1[0x247] == 0 || ((*(byte *)(param_1[0x247] + 0x6c) & 2) == 0)))) {
          *(byte *)(param_1[0x25c] + 0x6c) = *(byte *)(param_1[0x25c] + 0x6c) | 3;
          *(byte *)(param_1[0x25b] + 0x6c) = *(byte *)(param_1[0x25b] + 0x6c) | 3;
          return;
        }
        *(byte *)(param_1[0x25c] + 0x6c) = *(byte *)(param_1[0x25c] + 0x6c) & 0xfc;
        *(byte *)(param_1[0x25b] + 0x6c) = *(byte *)(param_1[0x25b] + 0x6c) & 0xfc;
      }
      return;
    }
  } while( true );
}

