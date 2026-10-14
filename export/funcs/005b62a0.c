
undefined4 FUN_005b62a0(void *param_1,HKEY param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  LSTATUS LVar2;
  LPCSTR pCVar3;
  HKEY pHVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX;
  void *pvVar10;
  int unaff_retaddr;
  int in_stack_000000a0;
  void *in_stack_000000c0;
  void *in_stack_00002178;
  LPDWORD pDVar11;
  LPDWORD lpReserved;
  DWORD *lpType;
  LPBYTE pBVar12;
  void **ppvVar13;
  void *local_c;
  HKEY local_8;
  DWORD local_4;
  
  local_4 = 0xffffffff;
  local_8 = (HKEY)&LAB_005c5a47;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  uVar6 = *(undefined4 *)(extraout_ECX + 8);
  puVar1 = (undefined4 *)FUN_0053e430(&stack0x00000000);
  FUN_005b6e80(&local_4,*puVar1,uVar6);
  param_4 = 0x80000001;
  param_3 = 1;
  LVar2 = RegOpenKeyExA((HKEY)0x80000001,PTR_s_Software_Microsoft_Microsoft_Gam_006143b0,0,0x20019,
                        &local_8);
  if (LVar2 == 0) {
    (&param_4)[param_3] = local_8;
    param_3 = param_3 + 1;
    if (local_8 != (HKEY)0x0) {
      local_8 = (HKEY)0x1;
      pvVar10 = param_1;
      while( true ) {
        pCVar3 = (LPCSTR)FUN_00402180(&stack0x00000178,"MP\\Logins\\Login%d",local_8);
        pHVar4 = (HKEY)FUN_005b6630();
        if (((pHVar4 == (HKEY)0x0) || (0x1f < param_3)) ||
           (LVar2 = RegOpenKeyExA(pHVar4,pCVar3,0,0x20019,&param_2), LVar2 != 0)) break;
        (&param_4)[param_3] = param_2;
        param_3 = param_3 + 1;
        if (param_2 == (HKEY)0x0) break;
        ppvVar13 = &local_c;
        pBVar12 = (LPBYTE)&stack0x000000c0;
        lpType = &local_4;
        pDVar11 = (LPDWORD)0x0;
        pCVar3 = "id";
        local_c = (void *)0x20;
        pHVar4 = (HKEY)FUN_005b6630();
        LVar2 = RegQueryValueExA(pHVar4,pCVar3,pDVar11,lpType,pBVar12,(LPDWORD)ppvVar13);
        pvVar5 = pvVar10;
        if (((LVar2 == 0) && (pvVar5 = in_stack_000000c0, local_4 != 4)) &&
           (pvVar5 = pvVar10, local_4 == 1)) {
          pvVar5 = (void *)atoi((char *)&stack0x000000c0);
        }
        local_c = pvVar5;
        uVar6 = FUN_005b6600();
        uVar6 = FUN_005b6d30(&local_c,uVar6);
        piVar7 = (int *)FUN_005b6c70(&stack0x00000098,uVar6);
        iVar8 = *piVar7;
        FUN_005ad620();
        FUN_005ad620();
        FUN_005b6640(&param_3,iVar8 + 0x10,"account");
        local_c = pvVar5;
        uVar6 = FUN_005b6600();
        uVar6 = FUN_005b6d30(&local_c,uVar6);
        piVar7 = (int *)FUN_005b6c70(&stack0x00000090,uVar6);
        iVar8 = *piVar7;
        FUN_005ad620();
        FUN_005ad620();
        FUN_005b6640(&param_3,iVar8 + 0x20,"password");
        ppvVar13 = &local_c;
        pBVar12 = (LPBYTE)&stack0x000000a0;
        lpReserved = (LPDWORD)0x0;
        pCVar3 = "time";
        local_c = (void *)0x20;
        pDVar11 = (LPDWORD)register0x00000010;
        pHVar4 = (HKEY)FUN_005b6630();
        LVar2 = RegQueryValueExA(pHVar4,pCVar3,lpReserved,pDVar11,pBVar12,(LPDWORD)ppvVar13);
        if (LVar2 == 0) {
          iVar8 = in_stack_000000a0;
          if (unaff_retaddr != 4) {
            if (unaff_retaddr != 1) goto LAB_005b658b;
            iVar8 = atoi((char *)&stack0x000000a0);
          }
          local_c = pvVar5;
          iVar9 = FUN_005ad350(&local_c);
          *(int *)(iVar9 + 0x20) = iVar8;
        }
        else {
LAB_005b658b:
          param_1 = pvVar5;
          iVar8 = FUN_005ad350(&param_1);
          *(undefined4 *)(iVar8 + 0x20) = 0;
        }
        FUN_00568810();
        local_8 = (HKEY)((int)&local_8->unused + 1);
        pvVar10 = pvVar5;
      }
      FUN_00568810();
    }
  }
  FUN_005687e0();
  FUN_005687e0();
  ExceptionList = in_stack_00002178;
  return 1;
}

