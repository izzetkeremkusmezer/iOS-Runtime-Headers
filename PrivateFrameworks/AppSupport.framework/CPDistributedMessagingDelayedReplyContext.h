/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingDelayedReplyContext : NSObject  {
    unsigned int _replyPort;
    BOOL _portPassing;
}

@property BOOL portPassing;
@property unsigned int replyPort;


- (void)setPortPassing:(BOOL)arg1;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(BOOL)arg2;
- (void)setReplyPort:(unsigned int)arg1;
- (BOOL)portPassing;
- (unsigned int)replyPort;
- (void)dealloc;

@end