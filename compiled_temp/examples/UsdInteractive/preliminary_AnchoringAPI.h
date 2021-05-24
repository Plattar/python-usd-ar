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
#ifndef USDINTERACTIVE_GENERATED_PRELIMINARY_ANCHORINGAPI_H
#define USDINTERACTIVE_GENERATED_PRELIMINARY_ANCHORINGAPI_H

/// \file usdInteractive/preliminary_AnchoringAPI.h

#include "pxr/pxr.h"
#include "pxr/usd/usdInteractive/api.h"
#include "pxr/usd/usd/apiSchemaBase.h"
#include "pxr/usd/usd/prim.h"
#include "pxr/usd/usd/stage.h"
#include "pxr/usd/usdInteractive/tokens.h"

#include "pxr/base/vt/value.h"

#include "pxr/base/gf/vec3d.h"
#include "pxr/base/gf/vec3f.h"
#include "pxr/base/gf/matrix4d.h"

#include "pxr/base/tf/token.h"
#include "pxr/base/tf/type.h"

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// PRELIMINARY_ANCHORINGAPI                                                   //
// -------------------------------------------------------------------------- //

/// \class UsdInteractivePreliminary_AnchoringAPI
///
/// 
/// API schema that specifies that the prim and its children should be
/// placed relative to a detected plane, image, or face.
/// 
/// When applied to a prim, this API schema allows the runtime to determine
/// the transform of that prim and its children independently from its
/// parent transform.
/// 
/// \section Anchor Layering
/// 
/// When one or more anchorable prims are defined beneath another anchorable
/// prim, each anchorable prim will be positioned independently and the
/// positions of its non-anchorable children will be located relative to it.
/// 
/// \note
/// Due to the independent nature of anchorable prims, it is recommended
/// that each anchorable prim be placed at the top level of your content.
/// This also helps make it clear that each subtree has its transform
/// independently calculated by the runtime.
/// 
///
/// For any described attribute \em Fallback \em Value or \em Allowed \em Values below
/// that are text/tokens, the actual token is published and defined in \ref UsdInteractiveTokens.
/// So to set an attribute to the value "rightHanded", use UsdInteractiveTokens->rightHanded
/// as the value.
///
class UsdInteractivePreliminary_AnchoringAPI : public UsdAPISchemaBase
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::SingleApplyAPI;

    /// \deprecated
    /// Same as schemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    static const UsdSchemaKind schemaType = UsdSchemaKind::SingleApplyAPI;

    /// Construct a UsdInteractivePreliminary_AnchoringAPI on UsdPrim \p prim .
    /// Equivalent to UsdInteractivePreliminary_AnchoringAPI::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit UsdInteractivePreliminary_AnchoringAPI(const UsdPrim& prim=UsdPrim())
        : UsdAPISchemaBase(prim)
    {
    }

    /// Construct a UsdInteractivePreliminary_AnchoringAPI on the prim held by \p schemaObj .
    /// Should be preferred over UsdInteractivePreliminary_AnchoringAPI(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit UsdInteractivePreliminary_AnchoringAPI(const UsdSchemaBase& schemaObj)
        : UsdAPISchemaBase(schemaObj)
    {
    }

    /// Destructor.
    USDINTERACTIVE_API
    virtual ~UsdInteractivePreliminary_AnchoringAPI();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    USDINTERACTIVE_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a UsdInteractivePreliminary_AnchoringAPI holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// UsdInteractivePreliminary_AnchoringAPI(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    USDINTERACTIVE_API
    static UsdInteractivePreliminary_AnchoringAPI
    Get(const UsdStagePtr &stage, const SdfPath &path);


    /// Applies this <b>single-apply</b> API schema to the given \p prim.
    /// This information is stored by adding "Preliminary_AnchoringAPI" to the 
    /// token-valued, listOp metadata \em apiSchemas on the prim.
    /// 
    /// \return A valid UsdInteractivePreliminary_AnchoringAPI object is returned upon success. 
    /// An invalid (or empty) UsdInteractivePreliminary_AnchoringAPI object is returned upon 
    /// failure. See \ref UsdPrim::ApplyAPI() for conditions 
    /// resulting in failure. 
    /// 
    /// \sa UsdPrim::GetAppliedSchemas()
    /// \sa UsdPrim::HasAPI()
    /// \sa UsdPrim::ApplyAPI()
    /// \sa UsdPrim::RemoveAPI()
    ///
    USDINTERACTIVE_API
    static UsdInteractivePreliminary_AnchoringAPI 
    Apply(const UsdPrim &prim);

protected:
    /// Returns the kind of schema this class belongs to.
    ///
    /// \sa UsdSchemaKind
    USDINTERACTIVE_API
    UsdSchemaKind _GetSchemaKind() const override;

    /// \deprecated
    /// Same as _GetSchemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    USDINTERACTIVE_API
    UsdSchemaKind _GetSchemaType() const override;

private:
    // needs to invoke _GetStaticTfType.
    friend class UsdSchemaRegistry;
    USDINTERACTIVE_API
    static const TfType &_GetStaticTfType();

    static bool _IsTypedSchema();

    // override SchemaBase virtuals.
    USDINTERACTIVE_API
    const TfType &_GetTfType() const override;

public:
    // --------------------------------------------------------------------- //
    // PRELIMINARYANCHORINGTYPE 
    // --------------------------------------------------------------------- //
    /// 
    /// Defines the type of anchoring for the prim. This is a required
    /// property for this schema.
    /// 
    /// plane: The content will be placed along the normal and the center of
    /// the detected plane.
    /// image: The content will be placed along the normal and center of the
    /// detected image.
    /// face:  The content will be placed along the normal and at the center
    /// of the detected face.
    /// none:  The content will not be anchored. This is equivalent to not
    /// applying the anchoring API schema to a prim at all.
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token preliminary:anchoring:type` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref UsdInteractiveTokens "Allowed Values" | plane, image, face, none |
    USDINTERACTIVE_API
    UsdAttribute GetPreliminaryAnchoringTypeAttr() const;

    /// See GetPreliminaryAnchoringTypeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDINTERACTIVE_API
    UsdAttribute CreatePreliminaryAnchoringTypeAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // PRELIMINARYPLANEANCHORINGALIGNMENT 
    // --------------------------------------------------------------------- //
    /// 
    /// Specifies the kind of detected plane the prim and its children
    /// should be placed relative to. This property is only active if the
    /// anchoring type is "plane".
    /// 
    /// horizontal: Horizontal planes include floors, tables, ceilings, and more.
    /// vertical: Vertical planes include walls, doors, windows, and more.
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token preliminary:planeAnchoring:alignment` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref UsdInteractiveTokens "Allowed Values" | horizontal, vertical, any |
    USDINTERACTIVE_API
    UsdAttribute GetPreliminaryPlaneAnchoringAlignmentAttr() const;

    /// See GetPreliminaryPlaneAnchoringAlignmentAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDINTERACTIVE_API
    UsdAttribute CreatePreliminaryPlaneAnchoringAlignmentAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // PRELIMINARYIMAGEANCHORINGREFERENCEIMAGE 
    // --------------------------------------------------------------------- //
    /// 
    /// Specifies the kind of detected image reference the prim and its
    /// children should be placed relative to. This property is only active
    /// if the anchoring type is "image".
    /// 
    /// \note
    /// This should point to a prim with the type "ReferenceImage".
    /// 
    ///
    USDINTERACTIVE_API
    UsdRelationship GetPreliminaryImageAnchoringReferenceImageRel() const;

    /// See GetPreliminaryImageAnchoringReferenceImageRel(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create
    USDINTERACTIVE_API
    UsdRelationship CreatePreliminaryImageAnchoringReferenceImageRel() const;

public:
    // ===================================================================== //
    // Feel free to add custom code below this line, it will be preserved by 
    // the code generator. 
    //
    // Just remember to: 
    //  - Close the class declaration with }; 
    //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
    //  - Close the include guard with #endif
    // ===================================================================== //
    // --(BEGIN CUSTOM CODE)--
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
