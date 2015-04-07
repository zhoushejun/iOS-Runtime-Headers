/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UITraitCollection, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding> {
    struct { 
        unsigned int hasRegisteredImages : 1; 
        unsigned int supportsBlockGeneration : 1; 
        unsigned int disconnectedFromAssetManager : 1; 
    } _assetFlags;
    _UIAssetManager *_assetManager;
    NSString *_assetName;
    BOOL _cacheContents;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _creationBlock;

    UITraitCollection *_defaultTraitCollection;
}

@property(readonly) _UIAssetManager * _assetManager;
@property(copy) NSString * assetName;
@property(copy) id creationBlock;

+ (id)_assetGeneratingImagesWithDrawingBlock:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_assetManager;
- (void)_clearResolvedImageResources;
- (BOOL)_containsImagesInPath:(id)arg1;
- (id)_defaultTraitCollection;
- (void)_disconnectFromAssetManager;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_mutableCatalog;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(BOOL)arg3;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2;
- (id)assetName;
- (id)creationBlock;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)setAssetName:(id)arg1;
- (void)setCreationBlock:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;

@end
