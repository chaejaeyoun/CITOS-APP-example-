// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Optional1-1.h>
#include <Outracks.Simulator.Cl-76415cc8.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DialogButton;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ShowingModalDialog;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal class ShowingModalDialog :169
// {
::g::Outracks::Simulator::Client::State_type* ShowingModalDialog_typeof();
void ShowingModalDialog__ctor_1_fn(ShowingModalDialog* __this, uString* header, uString* body, uString* details, uArray* buttons);
void ShowingModalDialog__New1_fn(uString* header, uString* body, uString* details, uArray* buttons, ShowingModalDialog** __retval);
void ShowingModalDialog__OnButtonClicked_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::DialogButton* button);
void ShowingModalDialog__OnEnterState_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::State** __retval);
void ShowingModalDialog__OnException_fn(ShowingModalDialog* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);
void ShowingModalDialog__OnUpdate_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct ShowingModalDialog : ::g::Outracks::Simulator::Client::State
{
    uStrong<uString*> _header;
    uStrong<uString*> _body;
    uStrong<uString*> _details;
    uStrong<uArray*> _buttons;
    uTField _clickedButton() { return __type->Field(this, 4); }

    void ctor_1(uString* header, uString* body, uString* details, uArray* buttons);
    void OnButtonClicked(::g::Outracks::Simulator::Client::DialogButton* button);
    static ShowingModalDialog* New1(uString* header, uString* body, uString* details, uArray* buttons);
};
// }

}}}} // ::g::Outracks::Simulator::Client
