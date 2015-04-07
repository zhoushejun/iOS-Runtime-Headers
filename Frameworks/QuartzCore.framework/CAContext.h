/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CALayer, NSDictionary;

@interface CAContext : NSObject {
}

@property struct CGColorSpace { }* colorSpace;
@property(readonly) unsigned int contextId;
@property(retain) CALayer * layer;
@property float level;
@property(readonly) NSDictionary * options;
@property(getter=isSecure) BOOL secure;
@property(readonly) BOOL valid;

+ (id)allContexts;
+ (id)currentContext;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;

- (id)_associatedScreen;
- (void)_setAssociatedScreen:(id)arg1;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize { float x1; float x2; })arg1 hasAlpha:(BOOL)arg2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (void)invalidate;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;

@end
