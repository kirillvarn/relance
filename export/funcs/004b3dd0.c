
void __fastcall FUN_004b3dd0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  wchar_t awStack_26c [6];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int local_20c;
  
  uVar2 = *(uint *)(param_1 + 0x340);
  local_20c = 0;
  iVar3 = uVar2 << 5;
  puVar4 = (undefined4 *)(param_1 + 0x394);
  while( true ) {
    iVar5 = *(int *)(param_1 + 0x334);
    if ((iVar5 == 0) || ((uint)(*(int *)(param_1 + 0x338) - iVar5 >> 5) <= uVar2)) {
      if (local_20c < 9) {
        puVar4 = (undefined4 *)(param_1 + 0x424 + local_20c * 4);
        local_20c = 9 - local_20c;
        do {
          uStack_22c = 0;
          uStack_230 = 0;
          uStack_234 = 0x1e;
          uStack_238 = 0x4b4001;
          (**(code **)(*(int *)puVar4[-9] + 0xa8))();
          uStack_238 = 0;
          uStack_23c = 1;
          uStack_240 = 2;
          uStack_244 = 0x4b4012;
          (**(code **)(*(int *)puVar4[-9] + 0xa8))();
          uStack_244 = 0;
          uStack_248 = 0;
          uStack_24c = 0x1e;
          uStack_250 = 0x4b4022;
          (**(code **)(*(int *)*puVar4 + 0xa8))();
          uStack_250 = 0;
          uStack_254 = 1;
          uStack_258 = 2;
          uStack_25c = 0x4b4032;
          (**(code **)(*(int *)*puVar4 + 0xa8))();
          uStack_25c = 0;
          uStack_260 = 1;
          awStack_26c[4] = L'\x02';
          awStack_26c[5] = L'\0';
          awStack_26c[2] = L'䁆';
          awStack_26c[3] = L'K';
          (**(code **)(*(int *)puVar4[-0x36] + 0xa8))();
          awStack_26c[2] = L'\0';
          awStack_26c[3] = L'\0';
          awStack_26c[0] = L'\x01';
          awStack_26c[1] = L'\0';
          (**(code **)(*(int *)puVar4[-0x2d] + 0xa8))(2);
          (**(code **)(*(int *)puVar4[-0x24] + 0xa8))(2,1,0);
          (**(code **)(*(int *)puVar4[-0x12] + 0xa8))(2,1,0);
          (**(code **)(*(int *)puVar4[9] + 0xa8))(1,1,0);
          (**(code **)(*(int *)puVar4[-0x36] + 0xa8))(0x30,0,0);
          (**(code **)(*(int *)puVar4[-0x1b] + 0xa8))(1,1,0);
          puVar4 = puVar4 + 1;
          local_20c = local_20c + -1;
        } while (local_20c != 0);
      }
      return;
    }
    uStack_22c = 0;
    uStack_230 = 0;
    uStack_234 = 2;
    iVar5 = iVar5 + iVar3;
    uStack_238 = 0x4b3e31;
    (**(code **)(*(int *)puVar4[0x1b] + 0xa8))();
    uStack_238 = 0;
    uStack_23c = 0;
    uStack_240 = 2;
    uStack_244 = 0x4b3e45;
    (**(code **)(*(int *)puVar4[0x24] + 0xa8))();
    uStack_244 = 0;
    uStack_248 = 0;
    uStack_24c = 2;
    uStack_250 = 0x4b3e56;
    (**(code **)(*(int *)puVar4[-0x12] + 0xa8))();
    uStack_250 = 0;
    uStack_254 = 0;
    uStack_258 = 2;
    uStack_25c = 0x4b3e67;
    (**(code **)(*(int *)puVar4[-9] + 0xa8))();
    uStack_25c = 0;
    uStack_260 = 0;
    awStack_26c[4] = L'\x02';
    awStack_26c[5] = L'\0';
    awStack_26c[2] = L'㹷';
    awStack_26c[3] = L'K';
    (**(code **)(*(int *)*puVar4 + 0xa8))();
    awStack_26c[2] = L'\0';
    awStack_26c[3] = L'\0';
    awStack_26c[0] = L'\0';
    awStack_26c[1] = L'\0';
    (**(code **)(*(int *)puVar4[9] + 0xa8))(1);
    (**(code **)(*(int *)puVar4[0x12] + 0xa8))(2,0,0);
    iVar6 = 1;
    (**(code **)(*(int *)puVar4[0x2d] + 0xa8))(1,0,0);
    (**(code **)(*(int *)puVar4[0x1b] + 0xa8))(0x1e,*(undefined4 *)(iVar5 + 8),0);
    swprintf(awStack_26c,0x5d0ec4,*(wchar_t **)(iVar5 + 0xc));
    (**(code **)(*(int *)puVar4[0x24] + 0xa8))(0x1d,&uStack_260,0);
    (**(code **)(*(int *)puVar4[-0x12] + 0xa8))(0x30,*(undefined1 *)(iVar5 + 0x1c),0);
    if (*(int *)(iVar5 + 0x14) == 0) {
      (**(code **)(*(int *)puVar4[9] + 0xa8))
                (4,"Interface\\NeuroNet\\Inventory\\repairblackbox.3db",0);
    }
    else {
      iVar3 = iVar6;
      (**(code **)(*(int *)puVar4[9] + 0xa8))
                (4,*(int *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
    }
    iVar5 = *(int *)(iVar5 + 0x10);
    (**(code **)(*(int *)puVar4[0x2d] + 0xa8))(0x40,100,iVar5);
    if (iVar5 < 0x46) {
      if (iVar5 < 0x1e) {
        uVar1 = 0xff2626ff;
      }
      else {
        uVar1 = 0xff26eaf5;
      }
    }
    else {
      uVar1 = 0xff30c24b;
    }
    (**(code **)(*(int *)puVar4[0x2d] + 0xa8))(0x3f,uVar1,0);
    local_20c = local_20c + 1;
    puVar4 = puVar4 + 1;
    if (8 < local_20c) break;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x20;
  }
  return;
}

