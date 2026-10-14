
void FUN_00418180(void)

{
  uint uVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  size_t _Count;
  void *pvVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  wchar_t *pwStack00000004;
  float fStack00000008;
  wchar_t *pwStack0000000c;
  size_t sStack00000010;
  int iStack00000014;
  float fStack00000018;
  int *in_stack_00002020;
  wchar_t *in_stack_00002024;
  float in_stack_00002028;
  int in_stack_0000202c;
  int *in_stack_00002030;
  int in_stack_00002034;
  
  FUN_005b7e90();
  sStack00000010 = wcslen(in_stack_00002024);
  iStack00000014 = 0;
  pwStack00000004 = in_stack_00002024;
  if ((int)sStack00000010 < 1) {
    *in_stack_00002030 = 0;
    return;
  }
  do {
    pwStack0000000c = (wchar_t *)&stack0x0000001c;
    bVar5 = false;
    bVar4 = true;
    fStack00000018 = in_stack_00002028;
    do {
      iVar10 = 0;
      bVar3 = false;
      fStack00000008 = 0.0;
      iVar9 = -1;
      do {
        wVar2 = pwStack00000004[iVar10];
        fVar11 = (float10)(**(code **)(*in_stack_00002020 + 0x14))(wVar2);
        if (wVar2 == L'\0') {
          iVar9 = 2;
          break;
        }
        if ((wVar2 == L'\r') || (wVar2 == L'\n')) {
          iVar9 = 1;
LAB_0041831e:
          bVar3 = true;
        }
        else {
          if ((wVar2 == L' ') || (wVar2 == L'\t')) {
            iVar9 = 0;
            goto LAB_0041831e;
          }
          if ((float10)fStack00000008 + fVar11 < (float10)fStack00000018 ==
              ((float10)fStack00000008 + fVar11 == (float10)fStack00000018)) {
            iVar9 = 3;
            break;
          }
        }
        iVar10 = iVar10 + 1;
        fStack00000008 = (float)(fVar11 + (float10)fStack00000008);
      } while (!bVar3);
      if ((bVar4) || (iVar9 != 3)) {
        iVar8 = iVar10;
        if (0 < iVar10) {
          do {
            wVar2 = *pwStack00000004;
            if ((wVar2 != L'\r') && (wVar2 != L'\n')) {
              *pwStack0000000c = wVar2;
              pwStack0000000c = pwStack0000000c + 1;
            }
            pwStack00000004 = pwStack00000004 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        fStack00000018 = fStack00000018 - fStack00000008;
        sStack00000010 = sStack00000010 - iVar10;
        *pwStack0000000c = L'\0';
      }
      if (iVar9 != 0) {
        bVar5 = true;
      }
      bVar4 = false;
    } while (!bVar5);
    if (iStack00000014 < in_stack_00002034) {
      _Count = wcslen((wchar_t *)&stack0x0000001c);
      uVar1 = _Count + 1;
      if (*(uint *)(in_stack_0000202c + 4 + iStack00000014 * 8) < uVar1) {
        pvVar6 = *(void **)(in_stack_0000202c + iStack00000014 * 8);
        if (pvVar6 == (void *)0x0) {
          puVar7 = malloc(uVar1 * 2);
          *(undefined2 **)(in_stack_0000202c + iStack00000014 * 8) = puVar7;
          *puVar7 = 0;
        }
        else {
          pvVar6 = realloc(pvVar6,uVar1 * 2);
          *(void **)(in_stack_0000202c + iStack00000014 * 8) = pvVar6;
        }
        *(uint *)(in_stack_0000202c + 4 + iStack00000014 * 8) = uVar1;
      }
      wcsncpy(*(wchar_t **)(in_stack_0000202c + iStack00000014 * 8),(wchar_t *)&stack0x0000001c,
              _Count);
      iVar9 = iStack00000014 * 8;
      iStack00000014 = iStack00000014 + 1;
      *(undefined2 *)(*(int *)(in_stack_0000202c + iVar9) + _Count * 2) = 0;
    }
    if ((int)sStack00000010 < 1) {
      *in_stack_00002030 = iStack00000014;
      return;
    }
  } while( true );
}

