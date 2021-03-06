/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer {
    struct RetainPtr<UITouch> { 
        void *m_ptr; 
    } _touch;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processTouches:(id)arg1 state:(int)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
