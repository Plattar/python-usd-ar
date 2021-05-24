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
#ifndef USDINTERACTIVE_GENERATED_PRELIMINARY_REFERENCEIMAGE_H
#define USDINTERACTIVE_GENERATED_PRELIMINARY_REFERENCEIMAGE_H

/// \file usdInteractive/preliminary_ReferenceImage.h

#include "pxr/pxr.h"
#include "pxr/usd/usdInteractive/api.h"
#include "pxr/usd/usd/typed.h"
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
// PRELIMINARY_REFERENCEIMAGE                                                 //
// -------------------------------------------------------------------------- //

/// \class UsdInteractivePreliminary_ReferenceImage
///
/// 
/// Defines an image anchoring reference, which includes the image and its
/// physical width.
/// 
///
class UsdInteractivePreliminary_ReferenceImage : public UsdTyped
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::ConcreteTyped;

    /// \deprecated
    /// Same as schemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    static const UsdSchemaKind schemaType = UsdSchemaKind::ConcreteTyped;

    /// Construct a UsdInteractivePreliminary_ReferenceImage on UsdPrim \p prim .
    /// Equivalent to UsdInteractivePreliminary_ReferenceImage::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit UsdInteractivePreliminary_ReferenceImage(const UsdPrim& prim=UsdPrim())
        : UsdTyped(prim)
    {
    }

    /// Construct a UsdInteractivePreliminary_ReferenceImage on the prim held by \p schemaObj .
    /// Should be preferred over UsdInteractivePreliminary_ReferenceImage(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit UsdInteractivePreliminary_ReferenceImage(const UsdSchemaBase& schemaObj)
        : UsdTyped(schemaObj)
    {
    }

    /// Destructor.
    USDINTERACTIVE_API
    virtual ~UsdInteractivePreliminary_ReferenceImage();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    USDINTERACTIVE_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a UsdInteractivePreliminary_ReferenceImage holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// UsdInteractivePreliminary_ReferenceImage(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    USDINTERACTIVE_API
    static UsdInteractivePreliminary_ReferenceImage
    Get(const UsdStagePtr &stage, const SdfPath &path);

    /// Attempt to ensure a \a UsdPrim adhering to this schema at \p path
    /// is defined (according to UsdPrim::IsDefined()) on this stage.
    ///
    /// If a prim adhering to this schema at \p path is already defined on this
    /// stage, return that prim.  Otherwise author an \a SdfPrimSpec with
    /// \a specifier == \a SdfSpecifierDef and this schema's prim type name for
    /// the prim at \p path at the current EditTarget.  Author \a SdfPrimSpec s
    /// with \p specifier == \a SdfSpecifierDef and empty typeName at the
    /// current EditTarget for any nonexistent, or existing but not \a Defined
    /// ancestors.
    ///
    /// The given \a path must be an absolute prim path that does not contain
    /// any variant selections.
    ///
    /// If it is impossible to author any of the necessary PrimSpecs, (for
    /// example, in case \a path cannot map to the current UsdEditTarget's
    /// namespace) issue an error and return an invalid \a UsdPrim.
    ///
    /// Note that this method may return a defined prim whose typeName does not
    /// specify this schema class, in case a stronger typeName opinion overrides
    /// the opinion at the current EditTarget.
    ///
    USDINTERACTIVE_API
    static UsdInteractivePreliminary_ReferenceImage
    Define(const UsdStagePtr &stage, const SdfPath &path);

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
    // IMAGE 
    // --------------------------------------------------------------------- //
    /// 
    /// The image to which this prim should be placed relative to. This
    /// should point to an image. This property is only active if the
    /// anchoring type is "image".
    /// 
    /// \note
    /// In a USDZ, the only valid image types are png and jpeg (any of the
    /// multiple common extensions for jpeg).
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform asset image` |
    /// | C++ Type | SdfAssetPath |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Asset |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    USDINTERACTIVE_API
    UsdAttribute GetImageAttr() const;

    /// See GetImageAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDINTERACTIVE_API
    UsdAttribute CreateImageAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // PHYSICALWIDTH 
    // --------------------------------------------------------------------- //
    /// 
    /// Specifies the physical, real-world width, defined in centimeters to
    /// avoid unit changes due to composition, of the image to which this prim
    /// should be placed relative to. This property can be used as a reference
    /// for AR runtimes to determine the approximate image size to look for
    /// and anchor this content to. This property is only active if the
    /// anchoring type is "image".
    /// 
    /// \note
    /// This property is not affected by its transform hierarchy as it
    /// describes a physical width in the real world.
    /// 
    /// \note
    /// The height is not required because it can be determined based on the
    /// aspect ratio of the image.
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform double physicalWidth = 0` |
    /// | C++ Type | double |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Double |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    USDINTERACTIVE_API
    UsdAttribute GetPhysicalWidthAttr() const;

    /// See GetPhysicalWidthAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDINTERACTIVE_API
    UsdAttribute CreatePhysicalWidthAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

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
