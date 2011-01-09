/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, UIEvent;



@interface UIGestureDelayedTouch : NSObject 
{
    UITouch *_touch;
    UITouch *_touchState;
    UITouch *_savedTouchState;
    UIEvent *_event;
}

@property(retain) UIEvent *event;
@property(retain) UITouch *savedTouchState;
@property(retain) UITouch *touchState;
@property(retain) UITouch *touch;


- (id)init;
- (void)dealloc;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)savedTouchState;
- (void)setSavedTouchState:(id)arg1;
- (id)touchState;
- (void)setTouchState:(id)arg1;
- (id)touch;
- (void)setTouch:(id)arg1;

@end