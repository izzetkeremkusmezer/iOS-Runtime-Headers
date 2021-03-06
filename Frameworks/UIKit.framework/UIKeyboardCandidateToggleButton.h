/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKBThemedView;

@interface UIKeyboardCandidateToggleButton : UIButton {
    NSString *_arrowDirection;
    UIKBThemedView *_themedView;
}

@property(copy) NSString * arrowDirection;
@property(retain) UIKBThemedView * themedView;

- (void)_setRenderConfig:(id)arg1;
- (id)arrowColorForState:(unsigned int)arg1;
- (id)arrowDirection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrameFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setArrowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setArrowDirection:(id)arg1;
- (void)setThemedView:(id)arg1;
- (id)themedView;
- (void)updateArrow;

@end
