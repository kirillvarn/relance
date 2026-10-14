
void __fastcall FUN_0044ced0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9ca2;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x13a8) = 0;
  *(undefined4 *)(param_1 + 0x1334) = 0;
  do {
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar1 + 0x198) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x19c) - *(int *)(iVar1 + 0x198) >> 2;
      }
      if (iVar5 <= iVar6) {
        ExceptionList = local_c;
        return;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x198) + iVar6 * 4);
      iVar5 = *(int *)(iVar1 + 0x10);
      *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = 0;
      if (iVar5 != 1) break;
      puVar2 = operator_new(0x18);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = 0;
      }
      else {
        FUN_0044d2c0();
        *puVar2 = &PTR_FUN_005cc068;
        puVar2[4] = 0;
        puVar2[3] = 0;
        *(undefined4 **)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = puVar2;
      }
LAB_0044d0e4:
      iVar1 = *(int *)(iVar1 + 4);
      uVar4 = 0;
      local_4 = 0xffffffff;
      if (iVar1 != 0) {
        uVar4 = FUN_0043a4f0(*(undefined4 *)(param_1 + 0x34),iVar1);
      }
      FUN_0044d310(uVar4,iVar5);
      *(int *)(param_1 + 0x1334) = *(int *)(param_1 + 0x1334) + 1;
      iVar6 = iVar6 + 1;
    }
    if (iVar5 == 2) {
      pvVar3 = operator_new(0xc);
      local_4 = 1;
      if (pvVar3 == (void *)0x0) {
LAB_0044d0d5:
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0044d410();
      }
LAB_0044d0d7:
      *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = uVar4;
      goto LAB_0044d0e4;
    }
    if (iVar5 == 3) {
      pvVar3 = operator_new(0xc);
      local_4 = 2;
      if (pvVar3 == (void *)0x0) {
LAB_0044d09c:
        *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = 0;
      }
      else {
        uVar4 = FUN_0044d540();
        *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = uVar4;
      }
      goto LAB_0044d0e4;
    }
    if (iVar5 == 4) {
      puVar2 = operator_new(0x18);
      local_4 = 3;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = 0;
      }
      else {
        FUN_0044d2c0();
        puVar2[3] = 0;
        *puVar2 = &PTR_FUN_005cc058;
        puVar2[4] = 1;
        *(undefined4 **)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = puVar2;
      }
      goto LAB_0044d0e4;
    }
    if (iVar5 == 5) {
      pvVar3 = operator_new(0xc);
      local_4 = 4;
      if (pvVar3 == (void *)0x0) goto LAB_0044d09c;
      uVar4 = FUN_0044d2c0();
      *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1334) * 4) = uVar4;
      goto LAB_0044d0e4;
    }
    if (iVar5 == 6) {
      pvVar3 = operator_new(0xc);
      local_4 = 5;
      if (pvVar3 == (void *)0x0) goto LAB_0044d0d5;
      uVar4 = FUN_0044d2c0();
      goto LAB_0044d0d7;
    }
    if ((((iVar5 != 7) && (iVar5 != 8)) && (iVar5 != 9)) &&
       (((iVar5 != 10 && (iVar5 != 0xb)) && (iVar5 != 0xc)))) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: Unknown button behavior type [%d]",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\RoomControlHotspot.cpp",0x5b,iVar5);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

