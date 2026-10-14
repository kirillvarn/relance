
/* public: struct IGunHost * __thiscall CGunWrapper::GetHost(void) */

IGunHost * __thiscall CGunWrapper::GetHost(CGunWrapper *this)

{
                    /* 0x1be70  41  ?GetHost@CGunWrapper@@QAEPAUIGunHost@@XZ */
  return *(IGunHost **)(this + 0x10);
}

