//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdInteractive/preliminary_Text.h"
#include "pxr/usd/usd/schemaRegistry.h"
#include "pxr/usd/usd/typed.h"

#include "pxr/usd/sdf/types.h"
#include "pxr/usd/sdf/assetPath.h"

PXR_NAMESPACE_OPEN_SCOPE

// Register the schema with the TfType system.
TF_REGISTRY_FUNCTION(TfType)
{
    TfType::Define<UsdInteractivePreliminary_Text,
        TfType::Bases< UsdGeomGprim > >();
    
    // Register the usd prim typename as an alias under UsdSchemaBase. This
    // enables one to call
    // TfType::Find<UsdSchemaBase>().FindDerivedByName("Preliminary_Text")
    // to find TfType<UsdInteractivePreliminary_Text>, which is how IsA queries are
    // answered.
    TfType::AddAlias<UsdSchemaBase, UsdInteractivePreliminary_Text>("Preliminary_Text");
}

/* virtual */
UsdInteractivePreliminary_Text::~UsdInteractivePreliminary_Text()
{
}

/* static */
UsdInteractivePreliminary_Text
UsdInteractivePreliminary_Text::Get(const UsdStagePtr &stage, const SdfPath &path)
{
    if (!stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdInteractivePreliminary_Text();
    }
    return UsdInteractivePreliminary_Text(stage->GetPrimAtPath(path));
}

/* static */
UsdInteractivePreliminary_Text
UsdInteractivePreliminary_Text::Define(
    const UsdStagePtr &stage, const SdfPath &path)
{
    static TfToken usdPrimTypeName("Preliminary_Text");
    if (!stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdInteractivePreliminary_Text();
    }
    return UsdInteractivePreliminary_Text(
        stage->DefinePrim(path, usdPrimTypeName));
}

/* virtual */
UsdSchemaKind UsdInteractivePreliminary_Text::_GetSchemaKind() const {
    return UsdInteractivePreliminary_Text::schemaKind;
}

/* virtual */
UsdSchemaKind UsdInteractivePreliminary_Text::_GetSchemaType() const {
    return UsdInteractivePreliminary_Text::schemaType;
}

/* static */
const TfType &
UsdInteractivePreliminary_Text::_GetStaticTfType()
{
    static TfType tfType = TfType::Find<UsdInteractivePreliminary_Text>();
    return tfType;
}

/* static */
bool 
UsdInteractivePreliminary_Text::_IsTypedSchema()
{
    static bool isTyped = _GetStaticTfType().IsA<UsdTyped>();
    return isTyped;
}

/* virtual */
const TfType &
UsdInteractivePreliminary_Text::_GetTfType() const
{
    return _GetStaticTfType();
}

UsdAttribute
UsdInteractivePreliminary_Text::GetContentAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->content);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateContentAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->content,
                       SdfValueTypeNames->String,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetFontAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->font);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateFontAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->font,
                       SdfValueTypeNames->StringArray,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetPointSizeAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->pointSize);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreatePointSizeAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->pointSize,
                       SdfValueTypeNames->Float,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetWidthAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->width);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateWidthAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->width,
                       SdfValueTypeNames->Float,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetHeightAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->height);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateHeightAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->height,
                       SdfValueTypeNames->Float,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetDepthAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->depth);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateDepthAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->depth,
                       SdfValueTypeNames->Float,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetWrapModeAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->wrapMode);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateWrapModeAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->wrapMode,
                       SdfValueTypeNames->Token,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetHorizontalAlignmentAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->horizontalAlignment);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateHorizontalAlignmentAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->horizontalAlignment,
                       SdfValueTypeNames->Token,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->verticalAlignment);
}

UsdAttribute
UsdInteractivePreliminary_Text::CreateVerticalAlignmentAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->verticalAlignment,
                       SdfValueTypeNames->Token,
                       /* custom = */ false,
                       SdfVariabilityVarying,
                       defaultValue,
                       writeSparsely);
}

namespace {
static inline TfTokenVector
_ConcatenateAttributeNames(const TfTokenVector& left,const TfTokenVector& right)
{
    TfTokenVector result;
    result.reserve(left.size() + right.size());
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    return result;
}
}

/*static*/
const TfTokenVector&
UsdInteractivePreliminary_Text::GetSchemaAttributeNames(bool includeInherited)
{
    static TfTokenVector localNames = {
        UsdInteractiveTokens->content,
        UsdInteractiveTokens->font,
        UsdInteractiveTokens->pointSize,
        UsdInteractiveTokens->width,
        UsdInteractiveTokens->height,
        UsdInteractiveTokens->depth,
        UsdInteractiveTokens->wrapMode,
        UsdInteractiveTokens->horizontalAlignment,
        UsdInteractiveTokens->verticalAlignment,
    };
    static TfTokenVector allNames =
        _ConcatenateAttributeNames(
            UsdGeomGprim::GetSchemaAttributeNames(true),
            localNames);

    if (includeInherited)
        return allNames;
    else
        return localNames;
}

PXR_NAMESPACE_CLOSE_SCOPE

// ===================================================================== //
// Feel free to add custom code below this line. It will be preserved by
// the code generator.
//
// Just remember to wrap code in the appropriate delimiters:
// 'PXR_NAMESPACE_OPEN_SCOPE', 'PXR_NAMESPACE_CLOSE_SCOPE'.
// ===================================================================== //
// --(BEGIN CUSTOM CODE)--
