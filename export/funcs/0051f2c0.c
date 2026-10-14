
/* WARNING: Removing unreachable block (ram,0x0051f725) */
/* WARNING: Removing unreachable block (ram,0x0051f73a) */
/* WARNING: Removing unreachable block (ram,0x0051f740) */
/* WARNING: Removing unreachable block (ram,0x0051f74f) */
/* WARNING: Removing unreachable block (ram,0x0051f758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051f2c0(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_EDI;
  bool bVar9;
  float10 fVar10;
  int *unaff_retaddr;
  int *piVar11;
  int *piStack_34;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 *puStack_8;
  undefined1 auStack_4 [4];
  
  piStack_34 = param_3;
  pfVar3 = (float *)(**(code **)(*param_3 + 0xc))();
  fStack_10 = *pfVar3;
  fStack_c = pfVar3[1];
  puStack_8 = (undefined4 *)pfVar3[2];
  pfVar3 = (float *)(**(code **)*unaff_retaddr)();
  FUN_00422b80(*pfVar3 - fStack_10,pfVar3[1] - fStack_c,pfVar3[2] - (float)puStack_8);
  param_2 = fStack_1c * fStack_1c + (float)uStack_14 * (float)uStack_14 + fStack_18 * fStack_18;
  if (_DAT_006164d0 * _DAT_006164d0 <= param_2) {
    if (unaff_retaddr[7] != 2) {
      return;
    }
    if (DAT_0067524c == 2) {
      return;
    }
    piVar11 = param_3;
    fVar10 = (float10)(**(code **)(*param_3 + 0x20))(param_3,DAT_00610534);
    FUN_0040fb60((float)fVar10,piVar11);
    (**(code **)(*unaff_retaddr + 0x17c))(auStack_4,param_3,0);
    fVar10 = (float10)(**(code **)(*param_3 + 0x20))(param_3,*(undefined4 *)(param_1 + 8));
    FUN_0040fb60((float)fVar10,param_3);
    if ((ushort)uStack_14 < 3) {
      return;
    }
    if (1 < uStack_14._2_2_) {
      return;
    }
    iVar4 = (**(code **)(*unaff_retaddr + 0x18c))(&piStack_34);
    if (iVar4 != 0) {
      return;
    }
    puVar5 = Heap::Malloc((Heap *)&DAT_00675350);
    if (puVar5 == (undefined4 *)0x0) {
      uStack_14 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)(puVar5 + 3) = 0;
      *(undefined2 *)((int)puVar5 + 0xe) = 0xffff;
      *puVar5 = &PTR_LAB_005dc364;
      puVar5[2] = unaff_retaddr;
      puVar5[1] = uStack_14;
      puVar5[3] = fStack_18;
      uStack_14 = puVar5;
    }
    FUN_00537260(DAT_00675318,1,&uStack_14);
    return;
  }
  if (unaff_retaddr[7] == 2) {
    if (((unaff_retaddr == (int *)0xfffffff4) || (iVar4 = unaff_retaddr[4], iVar4 == 0)) ||
       ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)) {
      iVar4 = 0;
    }
    if (((*(byte *)(iVar4 + 0xe0) & 7) != 0) && (unaff_retaddr[0x39] == 0)) {
      fVar10 = (float10)(**(code **)(*unaff_retaddr + 0x178))(&fStack_10);
      param_2 = (float)((float10)param_2 - fVar10 * fVar10);
    }
  }
  uVar8 = 0;
  if (DAT_00675244 != 0) {
    iVar4 = (**(code **)(*unaff_retaddr + 0x18c))(&stack0x00000000);
    if (iVar4 == DAT_00675244) {
      fVar2 = 0.0;
      if (_DAT_005c7474 < 0.0) {
        uVar8 = 1;
      }
    }
    else {
      fVar2 = _DAT_005c7474;
      if ((float)_DAT_005cbf58 < 0.0) {
        return;
      }
    }
    if (DAT_0067524c == 2) {
      if (fVar2 < _DAT_005c7474 != (fVar2 == _DAT_005c7474)) {
        return;
      }
    }
    else {
      if (DAT_0067524c == 0) {
        bVar9 = fVar2 >= _DAT_005c75dc;
      }
      else {
        if (fVar2 < _DAT_005c75dc) goto LAB_0051f53e;
        bVar9 = _DAT_00675248 < param_2;
      }
      if (bVar9) {
        return;
      }
    }
  }
LAB_0051f53e:
  (**(code **)(*unaff_retaddr + 0x17c))(&stack0xffffffdc,param_3,0);
  if ((2 < (ushort)unaff_EDI) && ((short)((uint)unaff_EDI >> 0x10) < 2)) {
    if ((float)puStack_8 < _DAT_005dc35c) {
      uVar8 = (uint)(DAT_0067524c != 0);
    }
    if ((((unaff_retaddr != (int *)0xfffffff4) && (iVar4 = unaff_retaddr[4], iVar4 != 0)) &&
        ((*(uint *)(iVar4 + 0x4c) & 0x103) == 0x103)) &&
       ((*(int *)(iVar4 + 0x88) != 0 && (*(char *)(*(int *)(iVar4 + 0x88) + 0x80) != '\0')))) {
      uVar8 = uVar8 + 3;
    }
    puVar5 = Heap::Malloc((Heap *)&DAT_00675350);
    if (puVar5 == (undefined4 *)0x0) {
      puStack_8 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)(puVar5 + 3) = 0;
      *(undefined2 *)((int)puVar5 + 0xe) = 0xffff;
      *puVar5 = &PTR_LAB_005dc364;
      puVar5[2] = unaff_retaddr;
      puVar5[1] = puStack_8;
      puVar5[3] = unaff_EDI;
      puStack_8 = puVar5;
    }
    puVar5 = (undefined4 *)(&DAT_006752f8)[uVar8 * 4];
    if ((&DAT_006752fc)[uVar8 * 4] - (int)puVar5 >> 2 == 0) {
      iVar4 = (&DAT_006752f4)[uVar8 * 4];
      if ((iVar4 == 0) || (uVar7 = (int)puVar5 - iVar4 >> 2, uVar7 < 2)) {
        uVar7 = 1;
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)puVar5 - iVar4 >> 2;
      }
      fStack_c = (float)(iVar4 + uVar7);
      iVar4 = (int)fStack_c;
      if ((int)fStack_c < 0) {
        iVar4 = 0;
      }
      pvVar6 = operator_new(iVar4 * 4);
      iVar4 = FUN_00597c70((&DAT_006752f4)[uVar8 * 4],puVar5,pvVar6);
      FUN_00427730(iVar4,1,&puStack_8);
      FUN_00597c70(puVar5,(&DAT_006752f8)[uVar8 * 4],iVar4 + 4);
      IDPMsgHandler::OnReceive
                ((IDPMsgHandler *)(&DAT_006752f0 + uVar8 * 0x10),(uchar *)(&DAT_006752f4)[uVar8 * 4]
                 ,(&DAT_006752f8)[uVar8 * 4]);
      FUN_005b7e1d((&DAT_006752f4)[uVar8 * 4]);
      (&DAT_006752fc)[uVar8 * 4] = (void *)((int)pvVar6 + (int)fStack_c * 4);
      iVar4 = FUN_005ad970();
      (&DAT_006752f4)[uVar8 * 4] = pvVar6;
      (&DAT_006752f8)[uVar8 * 4] = (int)pvVar6 + iVar4 * 4 + 4;
      return;
    }
    FUN_00597c70(puVar5,puVar5,puVar5 + 1);
    FUN_00427730((&DAT_006752f8)[uVar8 * 4],1 - ((&DAT_006752f8)[uVar8 * 4] - (int)puVar5 >> 2),
                 &puStack_8);
    puVar1 = (undefined4 *)(&DAT_006752f8)[uVar8 * 4];
    if (puVar5 != puVar1) {
      do {
        *puVar5 = puStack_8;
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar1);
      (&DAT_006752f8)[uVar8 * 4] = (&DAT_006752f8)[uVar8 * 4] + 4;
      return;
    }
    (&DAT_006752f8)[uVar8 * 4] = (&DAT_006752f8)[uVar8 * 4] + 4;
  }
  return;
}

