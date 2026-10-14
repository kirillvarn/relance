
void FUN_00577f50(int param_1,wchar_t *param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  size_t sVar3;
  UINT UVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  wchar_t local_200 [256];
  
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 < 0x101) {
    UVar4 = MapVirtualKeyA(uVar7,0);
    iVar5 = *(int *)(param_1 + 4);
    uVar7 = UVar4 << 0x10;
    bVar1 = false;
    if ((((((iVar5 == 0x26) || (iVar5 == 0x23)) || (iVar5 == 0x24)) ||
         ((iVar5 == 0x25 || (iVar5 == 0x27)))) ||
        ((iVar5 == 0x28 || ((iVar5 == 0x2d || (iVar5 == 0x2e)))))) ||
       ((iVar5 == 0x21 || (iVar5 == 0x22)))) {
      bVar1 = true;
    }
    if (uVar7 != 0) {
      if ((bVar1) || (iVar5 = (*(code *)PTR_FUN_00616428)(uVar7,param_2,param_3), iVar5 == 0)) {
        uVar7 = uVar7 | 0x1000000;
        iVar5 = (*(code *)PTR_FUN_00616428)(uVar7,param_2,param_3);
        if (iVar5 == 0) goto LAB_0057805b;
      }
      if (uVar7 != 0) goto LAB_00578071;
    }
LAB_0057805b:
    uVar2 = 0x3ae;
  }
  else {
    switch(uVar7) {
    case 0xfffffff7:
      uVar2 = 0x4ea;
      break;
    case 0xfffffff8:
      uVar2 = 0x3ad;
      break;
    case 0xfffffff9:
      uVar2 = 0x3ac;
      break;
    case 0xfffffffa:
      uVar2 = 0x3ab;
      break;
    case 0xfffffffb:
      uVar2 = 0x3aa;
      break;
    case 0xfffffffc:
      uVar2 = 0x3a9;
      break;
    case 0xfffffffd:
      uVar2 = 0x3a8;
      break;
    case 0xfffffffe:
      uVar2 = 0x3a7;
      break;
    case 0xffffffff:
      uVar2 = 0x3a6;
      break;
    default:
      uVar2 = 0x3ae;
    }
  }
  FUN_004347e0(DAT_0067eca8,uVar2,param_2,param_3);
LAB_00578071:
  if (*(int *)(param_1 + 8) != 0) {
    wcscpy(local_200,param_2);
    *param_2 = L'\0';
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      sVar3 = wcslen(param_2);
      UVar4 = MapVirtualKeyA(0x10,0);
      iVar5 = (*(code *)PTR_FUN_00616428)(UVar4 << 0x10,param_2,param_3);
      if (iVar5 == 0) {
        FUN_004347e0(DAT_0067eca8,0x4eb,param_2 + sVar3,param_3 - sVar3);
      }
      else {
        wcscat(param_2,L" + ");
      }
    }
    if ((*(byte *)(param_1 + 8) & 4) != 0) {
      sVar3 = wcslen(param_2);
      UVar4 = MapVirtualKeyA(0x11,0);
      iVar5 = (*(code *)PTR_FUN_00616428)(UVar4 << 0x10,param_2,param_3);
      if (iVar5 == 0) {
        FUN_004347e0(DAT_0067eca8,0x4ec,param_2 + sVar3,param_3 - sVar3);
      }
      else {
        wcscat(param_2,L" + ");
      }
    }
    if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
      sVar3 = wcslen(param_2);
      UVar4 = MapVirtualKeyA(0x12,0);
      iVar5 = (*(code *)PTR_FUN_00616428)(UVar4 << 0x10,param_2,param_3);
      if (iVar5 == 0) {
        FUN_004347e0(DAT_0067eca8,0x4ed,param_2 + sVar3,param_3 - sVar3);
      }
      else {
        wcscat(param_2,L" + ");
      }
    }
    sVar3 = wcslen(param_2);
    sVar6 = wcslen(local_200);
    if (sVar3 + sVar6 < param_3) {
      wcscat(param_2,local_200);
      return;
    }
    FUN_004347e0(DAT_0067eca8,0x3ae,param_2,param_3);
  }
  return;
}

