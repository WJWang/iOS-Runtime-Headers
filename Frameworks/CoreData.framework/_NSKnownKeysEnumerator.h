/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSKnownKeysEnumerator : NSEnumerator {
    unsigned long _flags;
    unsigned long _index;
    const id *_list;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    const id *_referenceItems;
    id _target;
}

- (void)_invalidate;
- (void)dealloc;
- (id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 andCopyItems:(BOOL)arg5;
- (id)nextObject;

@end
