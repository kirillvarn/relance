
/* public: struct IGunBrowser * __thiscall CGunWrapper::GetBrowser(void) */

IGunBrowser * __thiscall CGunWrapper::GetBrowser(CGunWrapper *this)

{
                    /* 0x15070  38  ?GetBrowser@CGunWrapper@@QAEPAUIGunBrowser@@XZ */
  return *(IGunBrowser **)(this + 0x14);
}

