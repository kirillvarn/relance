
void __fastcall FUN_00435100(IFileSystem *param_1)

{
  code cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  IFileSystem *unaff_ESI;
  code *pcVar9;
  IFileSystem *pIVar10;
  bool bVar11;
  int unaff_retaddr;
  IFileSystem *local_34;
  int *piStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_20 [4];
  code *pcStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b9148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  uVar3 = (**(code **)(**(int **)Anim_exref + 0x74))(*(int **)Anim_exref);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  piStack_30 = (int *)**(int **)(unaff_retaddr + 4);
  if (piStack_30 != *(int **)(unaff_retaddr + 4)) {
    do {
      pcVar8 = _C_exref;
      if ((code *)piStack_30[3] != (code *)0x0) {
        pcVar8 = (code *)piStack_30[3];
      }
      pIVar10 = param_1;
      for (puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 4);
          puVar2 != *(undefined4 **)(param_1 + 4); puVar2 = (undefined4 *)*puVar2) {
        pcVar4 = pcVar8;
        pcVar9 = (code *)puVar2[3];
        if ((code *)puVar2[3] == (code *)0x0) {
          pcVar9 = _C_exref;
        }
        do {
          cVar1 = *pcVar4;
          bVar11 = (byte)cVar1 < (byte)*pcVar9;
          if (cVar1 != *pcVar9) {
LAB_004351a4:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_004351a9;
          }
          if (cVar1 == (code)0x0) break;
          cVar1 = pcVar4[1];
          bVar11 = (byte)cVar1 < (byte)pcVar9[1];
          if (cVar1 != pcVar9[1]) goto LAB_004351a4;
          pcVar4 = pcVar4 + 2;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != (code)0x0);
        iVar5 = 0;
LAB_004351a9:
        if (iVar5 == 0) {
          pIVar10 = unaff_ESI;
          if (puVar2 != (undefined4 *)0xfffffff8) goto LAB_004352f1;
          break;
        }
        pIVar10 = unaff_ESI;
      }
      abStack_20[0] = SUB41(unaff_retaddr,0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(abStack_20,false);
      uVar6 = 0xffffffff;
      pcVar4 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != (code)0x0);
      uVar6 = ~uVar6 - 1;
      puStack_8 = (undefined1 *)0x0;
      bVar11 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                         (abStack_20,uVar6,true);
      if (bVar11) {
        pcVar4 = pcVar8;
        pcVar9 = pcStack_1c;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcStack_1c[uVar6] = (code)0x0;
        pIVar10 = unaff_ESI;
        uStack_18 = uVar6;
      }
      FUN_00436030(auStack_2c,*(undefined4 *)(pIVar10 + 4),abStack_20);
      iVar5 = *(int *)(*(int *)(pIVar10 + 4) + 4);
      local_34 = (IFileSystem *)0x0;
      DAEngine_create_filesystem((char *)pcVar8,&local_34,(char *)0x0);
      if (local_34 == (IFileSystem *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: Failed to open %s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\gf\\CharacterInfo.cpp",0x149,pcVar8);
      }
      else {
        iStack_24 = iVar5 + 8;
        (**(code **)(**(int **)Anim_exref + 0x80))
                  (*(int **)Anim_exref,&LAB_00434f20,local_34,auStack_28);
        DAEngine_release_filesystem(&local_34);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      if (pcStack_1c != (code *)0x0) {
        cVar1 = pcStack_1c[-1];
        if ((cVar1 == (code)0x0) || (cVar1 == (code)0xff)) {
          FUN_005b7e1d(pcStack_1c + -1);
        }
        else {
          pcStack_1c[-1] = (code)((char)cVar1 - 1);
        }
      }
      pcStack_1c = (code *)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
LAB_004352f1:
      piStack_30 = (int *)*piStack_30;
      param_1 = unaff_ESI;
    } while (piStack_30 != (int *)*(int *)(unaff_retaddr + 4));
  }
  ExceptionList = pvStack_10;
  return;
}

