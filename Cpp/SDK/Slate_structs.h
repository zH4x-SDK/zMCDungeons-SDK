#pragma once

// Name: DBZKakarot, Version: 1.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Slate.EDescendantScrollDestination
enum class Slate_EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView = 0,
	EDescendantScrollDestination__TopOrLeft = 1,
	EDescendantScrollDestination__Center = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 3,

};

// Enum Slate.EListItemAlignment
enum class Slate_EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed = 0,
	EListItemAlignment__EvenlySize = 1,
	EListItemAlignment__EvenlyWide = 2,
	EListItemAlignment__LeftAligned = 3,
	EListItemAlignment__RightAligned = 4,
	EListItemAlignment__CenterAligned = 5,
	EListItemAlignment__Fill       = 6,
	EListItemAlignment__EListItemAlignment_MAX = 7,

};

// Enum Slate.EMultipleKeyBindingIndex
enum class Slate_EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary = 0,
	EMultipleKeyBindingIndex__Secondary = 1,
	EMultipleKeyBindingIndex__NumChords = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 3,

};

// Enum Slate.EVirtualKeyboardDismissAction
enum class Slate_EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX = 3,

};

// Enum Slate.ETextWrappingPolicy
enum class Slate_ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2,

};

// Enum Slate.ETableViewMode
enum class Slate_ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3,

};

// Enum Slate.ESelectionMode
enum class Slate_ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4,

};

// Enum Slate.EProgressBarFillType
enum class Slate_EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5,

};

// Enum Slate.EStretch
enum class Slate_EStretch : uint8_t
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__EStretch_MAX         = 8,

};

// Enum Slate.EStretchDirection
enum class Slate_EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3,

};

// Enum Slate.ETextFlowDirection
enum class Slate_ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3,

};

// Enum Slate.ETextJustify
enum class Slate_ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0000
struct FVirtualKeyboardOptions
{

};

// ScriptStruct Slate.InputChord
// 0x0000
struct FInputChord
{

};

// ScriptStruct Slate.Anchors
// 0x0000
struct FAnchors
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
