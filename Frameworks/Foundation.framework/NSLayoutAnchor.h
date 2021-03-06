/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutAnchor : NSObject {
    int _attr;
    id _item;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

+ (id)layoutAnchorWithItem:(id)arg1 attribute:(int)arg2;

- (int)attribute;
- (id)constraintEqualToAnchor:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1 constant:(float)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(float)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(float)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)init;
- (id)initWithItem:(id)arg1 attribute:(int)arg2;
- (id)item;
- (void)setAttribute:(int)arg1;
- (void)setItem:(id)arg1;

@end
