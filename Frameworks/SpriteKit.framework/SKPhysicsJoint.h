/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding> {
    BOOL __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    struct CGVector { 
        float dx; 
        float dy; 
    } reactionForce;
    float reactionTorque;
}

@property BOOL _implicit;
@property(retain) SKPhysicsBody * bodyA;
@property(retain) SKPhysicsBody * bodyB;
@property(readonly) struct CGVector { float x1; float x2; } reactionForce;
@property(readonly) float reactionTorque;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_implicit;
- (id)bodyA;
- (id)bodyB;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGVector { float x1; float x2; })reactionForce;
- (float)reactionTorque;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)set_implicit:(BOOL)arg1;

@end
