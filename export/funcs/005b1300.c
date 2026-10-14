
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005b1300(void)

{
  HWND hWndParent;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  IMEFocus *pIVar6;
  int iVar7;
  INT_PTR IVar8;
  char *pcVar9;
  DWORD _Seed;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined **in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined **in_stack_00000018;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined1 uStack00000054;
  undefined4 uStack00000055;
  UINT in_stack_00000060;
  WPARAM in_stack_00000064;
  LPARAM in_stack_00000068;
  void *in_stack_00002278;
  HWND local_c;
  undefined1 *local_8;
  WPARAM local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005c5966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  bVar1 = DALib::Startup(DAT_0067eca0,(char *)0x0);
  if (!bVar1) {
    ExceptionList = in_stack_00002278;
    return 0;
  }
  DALib::OpenData(&DAT_00679e0c);
  FUN_0041ef20();
  iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
  while (iVar4 != 0) {
    BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
    if (BVar5 == 0) {
      ExceptionList = in_stack_00002278;
      return 0;
    }
    pIVar6 = IMEFocus::GetSingleton();
    if (((pIVar6 == (IMEFocus *)0x0) ||
        (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
       (cVar2 = FUN_00577850(), cVar2 == '\0')) {
      TranslateMessage((MSG *)&local_c);
      DispatchMessageA((MSG *)&local_c);
    }
    iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
  }
  if (*(int *)Data_exref == 0) {
LAB_005b1408:
    (**(code **)FDUMP_exref)();
  }
  else {
    if (*(int *)Hardpoint_exref != 0) {
      if (*(int *)Renderer_exref == 0) {
LAB_005b14af:
        (**(code **)FDUMP_exref)();
        ExceptionList = in_stack_00002278;
        return 0;
      }
      if (*(int *)TextureLib_exref == 0) goto LAB_005b1408;
      if (*(int *)MaterialLib_exref != 0) {
        if (*(int *)VertexBuffer_exref == 0) goto LAB_005b14af;
        if (*(int *)Alchemy_exref == 0) {
          (**(code **)FDUMP_exref)();
        }
        if (*(int *)MaterialBatcher_exref != 0) {
          FUN_0041ef20();
          iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
          while (iVar4 != 0) {
            BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
            if (BVar5 == 0) {
              ExceptionList = in_stack_00002278;
              return 0;
            }
            pIVar6 = IMEFocus::GetSingleton();
            if (((pIVar6 == (IMEFocus *)0x0) ||
                (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
               (cVar2 = FUN_00577850(), cVar2 == '\0')) {
              TranslateMessage((MSG *)&local_c);
              DispatchMessageA((MSG *)&local_c);
            }
            iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
          }
          Async::Startup();
          Timing::init();
          cVar2 = FUN_004247a0();
          if (cVar2 == '\0') {
            iVar4 = FUN_004347e0();
            if (iVar4 == 0) {
              wcscpy((wchar_t *)&stack0x00000078,L"Freelancer Fatal Error");
            }
            iVar4 = FUN_004347e0();
            if (iVar4 == 0) {
              wcscpy((wchar_t *)&stack0x00000278,
                     L"Freelancer has encountered a fatal error and will now terminate.\n");
            }
            FUN_004247c0();
            do {
              iVar4 = ShowCursor(1);
            } while (iVar4 < 0);
            (*(code *)PTR_FUN_00616430)();
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          in_stack_00000040 = 0xffffffff;
          in_stack_00000044 = 0xffffffff;
          in_stack_00000048 = 0;
          in_stack_0000004c = 1;
          in_stack_00000050 = 2;
          uStack00000054 = 1;
          in_stack_00000034 = 0x3c;
          in_stack_00000030 = 0xffffffff;
          in_stack_0000003c = 0;
          in_stack_00000038 = 0;
          uStack00000055 = CONCAT31(uStack00000055._1_3_,1);
          cVar2 = FUN_005b38d0();
          hWndParent = DAT_0067eca0;
          in_stack_00000010 = (undefined **)0x0;
          in_stack_00000014 = 0;
          cVar3 = FUN_005b0220();
          if (cVar3 == '\0') {
            FUN_00444e20();
          }
          else {
            iVar4 = 0;
            iVar7 = ShowCursor(1);
            while (iVar7 < 0) {
              iVar4 = iVar4 + 1;
              iVar7 = ShowCursor(1);
            }
            IVar8 = DialogBoxParamA(DAT_0067eca8,&DAT_00000082,hWndParent,FUN_005b05a0,
                                    (LPARAM)&stack0x00000010);
            if (-1 < iVar4) {
              iVar4 = iVar4 + 1;
              do {
                ShowCursor(0);
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (in_stack_00000010 != (undefined **)0x0) {
              free(in_stack_00000010);
            }
            if (IVar8 != 1) {
              ExceptionList = in_stack_00002278;
              return 0;
            }
          }
          FUN_004242e0();
          cVar3 = FUN_00424dd0();
          if (cVar3 == '\0') {
            iVar4 = FUN_004347e0();
            if (iVar4 == 0) {
              wcscpy((wchar_t *)&stack0x00000078,L"Freelancer Fatal Error");
            }
            iVar4 = FUN_004347e0();
            if (iVar4 == 0) {
              wcscpy((wchar_t *)&stack0x00000278,
                     L"Freelancer has encountered a fatal error and will now terminate.\n");
            }
            FUN_004247c0();
            do {
              iVar4 = ShowCursor(1);
            } while (iVar4 < 0);
            (*(code *)PTR_FUN_00616430)();
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          if (cVar2 == '\0') {
            FUN_004a9380();
            FUN_005b40f0();
          }
          FUN_005b3ec0();
          (**(code **)(**(int **)Alchemy_exref + 0x34))();
          MediaPlayer::SetApproach(DAT_0067eccc);
          MediaPlayer::Startup();
          puVar12 = &DAT_00679f14;
          do {
            if (*(int *)(puVar12 + -4) != 0) {
              pcVar9 = (char *)FUN_00402180();
              MediaPlayer::PlayMovie(DAT_0067eca0,(bool)DAT_00679be5,pcVar9);
              bVar1 = MediaPlayer::UpdateMovie();
              if (bVar1) {
                do {
                  FUN_0041ef20();
                  iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                  while (iVar4 != 0) {
                    BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
                    if (BVar5 == 0) {
                      MediaPlayer::StopMovie();
                      ExceptionList = in_stack_00002278;
                      return 0;
                    }
                    pIVar6 = IMEFocus::GetSingleton();
                    if (((pIVar6 == (IMEFocus *)0x0) ||
                        (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
                       (cVar2 = FUN_00577850(), cVar2 == '\0')) {
                      TranslateMessage((MSG *)&local_c);
                      DispatchMessageA((MSG *)&local_c);
                    }
                    iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                  }
                  bVar1 = MediaPlayer::UpdateMovie();
                } while (bVar1);
              }
              MediaPlayer::StopMovie();
            }
            puVar12 = puVar12 + 0x108;
          } while ((int)puVar12 < 0x67a22c);
          MediaPlayer::Shutdown();
          FUN_00579180();
          FUN_00579220();
          FUN_00579290();
          in_stack_0000002c = 0;
          in_stack_00000018 = &PTR_FUN_005e2718;
          FUN_00422610();
          FUN_004214d0();
          cVar2 = FUN_00565430();
          if (cVar2 != '\0') {
            cVar2 = FUN_00424f30();
            if (cVar2 != '\0') {
              FUN_004215e0();
              FUN_00565a10();
              FUN_00425080();
              FUN_00425140();
            }
            cVar2 = FUN_00424f30();
            if (cVar2 != '\0') {
              FUN_004215e0();
              FUN_00565a10();
              FUN_00425080();
              FUN_00425140();
            }
          }
          FUN_005650d0();
          RefreshLoadingProgress();
          FUN_0041ef20();
          iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
          while (iVar4 != 0) {
            BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
            if (BVar5 == 0) goto LAB_005b1bf8;
            pIVar6 = IMEFocus::GetSingleton();
            if (((pIVar6 == (IMEFocus *)0x0) ||
                (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
               (cVar2 = FUN_00577850(), cVar2 == '\0')) {
              TranslateMessage((MSG *)&local_c);
              DispatchMessageA((MSG *)&local_c);
            }
            iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
          }
          RefreshLoadingProgress();
          _Seed = timeGetTime();
          srand(_Seed);
          uVar10 = CreateID("Freelancer");
          if (uVar10 == 0) {
            (**(code **)FDUMP_exref)();
          }
          else {
            RefreshLoadingProgress();
            in_stack_00000010 = &PTR_LAB_005e6ab8;
            iVar4 = DataConfig::startup(&DAT_00679d04,(ICliObjFactory *)&DAT_006164a0,
                                        (ProgressCB *)&stack0x00000010);
            if (iVar4 != 1) {
              if (iVar4 == 0) {
                RefreshLoadingProgress();
                FUN_0041ef20();
                iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                while (iVar4 != 0) {
                  BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
                  if (BVar5 == 0) goto LAB_005b1bf8;
                  pIVar6 = IMEFocus::GetSingleton();
                  if (((pIVar6 == (IMEFocus *)0x0) ||
                      (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
                     (cVar2 = FUN_00577850(), cVar2 == '\0')) {
                    TranslateMessage((MSG *)&local_c);
                    DispatchMessageA((MSG *)&local_c);
                  }
                  iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                }
                FUN_00468c20();
                FUN_005b0c30();
                FUN_0041ef20();
                iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                while (iVar4 != 0) {
                  BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
                  if (BVar5 == 0) goto LAB_005b1bf8;
                  pIVar6 = IMEFocus::GetSingleton();
                  if (((pIVar6 == (IMEFocus *)0x0) ||
                      (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
                     (cVar2 = FUN_00577850(), cVar2 == '\0')) {
                    TranslateMessage((MSG *)&local_c);
                    DispatchMessageA((MSG *)&local_c);
                  }
                  iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                }
                RefreshLoadingProgress();
                FUN_0059d5a0();
                FUN_00564520();
                DAT_0067ecb4 = FUN_0059db20();
                FUN_0041ef20();
                iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                while (iVar4 != 0) {
                  BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
                  if (BVar5 == 0) goto LAB_005b1bf8;
                  pIVar6 = IMEFocus::GetSingleton();
                  if (((pIVar6 == (IMEFocus *)0x0) ||
                      (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
                     (cVar2 = FUN_00577850(), cVar2 == '\0')) {
                    TranslateMessage((MSG *)&local_c);
                    DispatchMessageA((MSG *)&local_c);
                  }
                  iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                }
                piVar11 = (int *)FUN_00575430();
                (**(code **)(*piVar11 + 0x20))();
                FUN_0041ef20();
                iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                while (iVar4 != 0) {
                  BVar5 = GetMessageA((LPMSG)&local_c,(HWND)0x0,0,0);
                  if (BVar5 == 0) goto LAB_005b1bf8;
                  pIVar6 = IMEFocus::GetSingleton();
                  if (((pIVar6 == (IMEFocus *)0x0) ||
                      (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&local_c), !bVar1)) &&
                     (cVar2 = FUN_00577850(), cVar2 == '\0')) {
                    TranslateMessage((MSG *)&local_c);
                    DispatchMessageA((MSG *)&local_c);
                  }
                  iVar4 = PeekMessageA((LPMSG)&local_c,(HWND)0x0,0,0,0);
                }
                piVar11 = (int *)FUN_0054bd30();
                (**(code **)(*piVar11 + 0x20))();
                FUN_0041ef20();
                iVar4 = PeekMessageA((LPMSG)&stack0x0000005c,(HWND)0x0,0,0,0);
                while( true ) {
                  if (iVar4 == 0) {
                    piVar11 = (int *)FUN_00437420();
                    (**(code **)(*piVar11 + 0x20))();
                    piVar11 = (int *)FUN_0043d560();
                    (**(code **)(*piVar11 + 0x20))();
                    FUN_00564060();
                    InitializeRichText(DAT_00610854);
                    ReinitializeRichTextFonts();
                    DeviceTRC::set_image_root(&DAT_00679e0c);
                    FUN_004690c0();
                    FUN_0059db20();
                    FUN_0059db20();
                    RefreshLoadingProgress();
                    FUN_004f70d0();
                    RefreshLoadingProgress();
                    FUN_0042d770();
                    FUN_00579190();
                    FUN_00565010();
                    ExceptionList = in_stack_00002278;
                    return 1;
                  }
                  BVar5 = GetMessageA((LPMSG)&stack0x0000005c,(HWND)0x0,0,0);
                  if (BVar5 == 0) break;
                  pIVar6 = IMEFocus::GetSingleton();
                  if (((pIVar6 == (IMEFocus *)0x0) ||
                      (bVar1 = IMEFocus::IgnoreHotKey(pIVar6,(tagMSG *)&stack0x0000005c), !bVar1))
                     && (cVar2 = FUN_00577850(), cVar2 == '\0')) {
                    TranslateMessage((MSG *)&stack0x0000005c);
                    DispatchMessageA((MSG *)&stack0x0000005c);
                  }
                  iVar4 = PeekMessageA((LPMSG)&stack0x0000005c,(HWND)0x0,0,0,0);
                }
              }
              else {
                (**(code **)FDUMP_exref)();
              }
            }
          }
LAB_005b1bf8:
          FUN_00565010();
          ExceptionList = in_stack_00002278;
          return 0;
        }
      }
    }
    (**(code **)FDUMP_exref)();
  }
  ExceptionList = in_stack_00002278;
  return 0;
}

