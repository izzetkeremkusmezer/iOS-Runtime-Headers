/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAITOrientedBounds : NSObject {
}

+ (id)absoluteOrientedBoundsOfDrawable:(id)arg1;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })axisParallelBoundsOfOrientedBounds:(id)arg1;
+ (id)relativeOrientedBoundsOfDrawable:(id)arg1;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toOrientedBounds:(id)arg2;

@end
