
void __fastcall FUN_0044a540(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar8 = 0;
LAB_0044a54d:
  do {
    iVar1 = *(int *)(param_1 + 0x40);
    if (*(int *)(iVar1 + 0x1b8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 0x1bc) - *(int *)(iVar1 + 0x1b8) >> 2;
    }
    if (iVar6 <= iVar8) {
      local_40 = FUN_0043aff0(*(undefined4 *)(param_1 + 0x38));
      local_4c = (int *)0x0;
      local_44 = (int *)0x0;
      cVar5 = FUN_0043ce90(&local_44,1);
      while (cVar5 != '\0') {
        local_4c = (int *)((int)local_4c + 1);
        cVar5 = FUN_0043ce90(&local_44,1);
      }
      local_50 = 0;
      if (0 < (int)local_4c) {
        do {
          iVar8 = 0;
          local_48 = 0;
          local_44 = (int *)0x0;
          cVar5 = FUN_0043ce90(&local_44,1);
          while (cVar5 != '\0') {
            if (local_48 == local_50) {
              iVar8 = local_44[2];
              break;
            }
            local_48 = local_48 + 1;
            cVar5 = FUN_0043ce90(&local_44,1);
          }
          iVar1 = *(int *)(iVar8 + 8);
          if (iVar1 == 1) {
            malloc_strcpy((char **)(param_1 + 0x1038 + *(int *)(param_1 + 0x1088) * 4),
                          *(char **)(iVar8 + 0x10));
            *(undefined1 *)(*(int *)(param_1 + 0x1088) + 0x1078 + param_1) =
                 *(undefined1 *)(iVar8 + 0xc);
            *(int *)(param_1 + 0x1088) = *(int *)(param_1 + 0x1088) + 1;
          }
          else if (iVar1 == 2) {
            malloc_strcpy((char **)(param_1 + 0x108c + *(int *)(param_1 + 0x10dc) * 4),
                          *(char **)(iVar8 + 0x10));
            *(undefined1 *)(*(int *)(param_1 + 0x10dc) + 0x10cc + param_1) =
                 *(undefined1 *)(iVar8 + 0xc);
            *(int *)(param_1 + 0x10dc) = *(int *)(param_1 + 0x10dc) + 1;
          }
          else if (iVar1 == 3) {
            malloc_strcpy((char **)(param_1 + 0x10e0 + *(int *)(param_1 + 0x1130) * 4),
                          *(char **)(iVar8 + 0x10));
            *(undefined1 *)(*(int *)(param_1 + 0x1130) + 0x1120 + param_1) =
                 *(undefined1 *)(iVar8 + 0xc);
            *(int *)(param_1 + 0x1130) = *(int *)(param_1 + 0x1130) + 1;
          }
          local_50 = local_50 + 1;
        } while (local_50 < (int)local_4c);
      }
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x1088)) {
        local_44 = (int *)(param_1 + 0x1038);
        do {
          puVar7 = (undefined4 *)FUN_00456540(param_1,1);
          local_40 = *local_44;
          Csys::Csys((Csys *)&local_30);
          Csys::set_identity((Csys *)&local_30);
          FUN_00454eb0(local_40,0,&local_30,0);
          *puVar7 = 0;
          *(undefined1 *)(puVar7 + 1) = 1;
          *(undefined1 *)((int)puVar7 + 6) = 0;
          *(undefined1 *)(puVar7 + 2) = 1;
          *(undefined1 *)((int)puVar7 + 9) = 0;
          puVar7[4] = 0;
          *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(param_1 + 0x1078 + iVar8);
          FUN_00454f80();
          iVar8 = iVar8 + 1;
          local_44 = local_44 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x1088));
      }
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x10dc)) {
        local_44 = (int *)(param_1 + 0x108c);
        do {
          puVar7 = (undefined4 *)FUN_00456540(param_1,0);
          local_40 = *local_44;
          Csys::set_identity((Csys *)&local_30);
          FUN_00454eb0(local_40,5,&local_30,0);
          *puVar7 = 0;
          *(undefined1 *)(puVar7 + 1) = 0;
          *(undefined1 *)((int)puVar7 + 6) = 0;
          *(undefined1 *)(puVar7 + 2) = 1;
          *(undefined1 *)((int)puVar7 + 9) = 0;
          puVar7[4] = 0;
          *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(param_1 + 0x10cc + iVar8);
          FUN_00454f80();
          iVar8 = iVar8 + 1;
          local_44 = local_44 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x10dc));
      }
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x1130)) {
        local_44 = (int *)(param_1 + 0x10e0);
        do {
          puVar7 = (undefined4 *)FUN_00456540(param_1,0);
          local_40 = *local_44;
          Csys::Csys((Csys *)&local_30);
          Csys::set_identity((Csys *)&local_30);
          FUN_00454eb0(local_40,0,&local_30,0);
          *puVar7 = 0;
          *(undefined1 *)(puVar7 + 1) = 0;
          *(undefined1 *)((int)puVar7 + 6) = 0;
          *(undefined1 *)(puVar7 + 2) = 1;
          *(undefined1 *)((int)puVar7 + 9) = 0;
          puVar7[4] = 0;
          *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(param_1 + 0x1120 + iVar8);
          FUN_00454f80();
          iVar8 = iVar8 + 1;
          local_44 = local_44 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x1130));
      }
      cVar5 = FUN_00449f40(&local_44,&local_40);
      if (cVar5 == '\0') {
        cVar5 = FUN_00448a20();
        if (cVar5 != '\0') {
          *(undefined1 *)(param_1 + 0x515) = 1;
        }
        iVar8 = FUN_00446be0();
        if (iVar8 != 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 0xb8);
          if ((iVar8 != 0) &&
             (bVar4 = RtcSlider::is_enabled(*(ulong *)(*(int *)(param_1 + 0x40) + 0xbc)), bVar4)) {
            puVar7 = (undefined4 *)FUN_00456540(param_1,0);
            Csys::set_identity((Csys *)&local_30);
            FUN_00454eb0(iVar8,0,&local_30,0);
            *(undefined1 *)(puVar7 + 5) = 1;
            *puVar7 = 0;
            *(undefined1 *)((int)puVar7 + 6) = 1;
            *(undefined1 *)(puVar7 + 2) = 1;
            *(undefined1 *)((int)puVar7 + 9) = 1;
            puVar7[4] = 0;
            *(undefined1 *)((int)puVar7 + 0x16) = 1;
            FUN_00454f80();
            *(undefined1 *)(param_1 + 0x515) = 1;
          }
        }
        local_4c = (int *)(param_1 + 0x518);
        local_40 = 0x40;
        do {
          if ((((*local_4c != 0) && (iVar8 = *(int *)(*local_4c + 0x1bc), iVar8 != -1)) &&
              (pcVar3 = *(char **)(*(int *)(*(int *)(param_1 + 0x508) + iVar8 * 8) + 0x40),
              pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) {
            puVar7 = (undefined4 *)FUN_00456540(param_1,0);
            if (puVar7 != (undefined4 *)0x0) {
              local_3c = 0;
              local_38 = 0;
              local_34 = 0;
              local_30 = 0;
              local_2c = 0;
              local_28 = 0;
              FUN_004215b0();
              FUN_00454eb0(pcVar3,0,&local_30,0);
              FUN_00453a40(*local_4c,0);
              *puVar7 = 1;
              *(undefined1 *)((int)puVar7 + 6) = 1;
              *(undefined1 *)(puVar7 + 2) = 1;
              *(undefined1 *)((int)puVar7 + 0xe) = 0;
              *(undefined1 *)((int)puVar7 + 9) = 1;
              puVar7[4] = 0;
              *(undefined1 *)((int)puVar7 + 10) = 0;
              *(undefined1 *)((int)puVar7 + 0xb) = 0;
              *(undefined1 *)((int)puVar7 + 0x16) = 1;
              FUN_00454f80();
            }
            *(undefined1 *)(param_1 + 0x515) = 1;
          }
          local_4c = local_4c + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
      FUN_004489f0(0);
      return;
    }
    piVar2 = *(int **)(*(int *)(iVar1 + 0x1b8) + iVar8 * 4);
    bVar4 = RtcSlider::is_enabled(piVar2[2]);
    if (bVar4) {
      iVar1 = *piVar2;
      if (iVar1 == 1) {
        malloc_strcpy((char **)(param_1 + 0x1038 + *(int *)(param_1 + 0x1088) * 4),(char *)piVar2[1]
                     );
        *(undefined1 *)(*(int *)(param_1 + 0x1088) + 0x1078 + param_1) = 1;
        *(int *)(param_1 + 0x1088) = *(int *)(param_1 + 0x1088) + 1;
        iVar8 = iVar8 + 1;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            malloc_strcpy((char **)(param_1 + 0x10e0 + *(int *)(param_1 + 0x1130) * 4),
                          (char *)piVar2[1]);
            *(undefined1 *)(*(int *)(param_1 + 0x1130) + 0x1120 + param_1) = 1;
            *(int *)(param_1 + 0x1130) = *(int *)(param_1 + 0x1130) + 1;
          }
          goto LAB_0044a65a;
        }
        malloc_strcpy((char **)(param_1 + 0x108c + *(int *)(param_1 + 0x10dc) * 4),(char *)piVar2[1]
                     );
        *(undefined1 *)(*(int *)(param_1 + 0x10dc) + 0x10cc + param_1) = 1;
        *(int *)(param_1 + 0x10dc) = *(int *)(param_1 + 0x10dc) + 1;
        iVar8 = iVar8 + 1;
      }
      goto LAB_0044a54d;
    }
LAB_0044a65a:
    iVar8 = iVar8 + 1;
  } while( true );
}

