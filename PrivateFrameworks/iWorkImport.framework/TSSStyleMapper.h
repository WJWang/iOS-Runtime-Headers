/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableSet, NSSet, NSString, TSKAddedToDocumentContext, TSSStylesheet, TSURetainedPointerKeyDictionary;

@interface TSSStyleMapper : NSObject <TSKStyleMapper> {
    NSMutableSet *_createdStyles;
    TSKAddedToDocumentContext *_dolcContext;
    NSMutableArray *_mappingContext;
    TSURetainedPointerKeyDictionary *_styleMap;
    TSSStylesheet *_targetStylesheet;
    TSSStylesheet *_targetThemeStylesheet;
    bool_clientsMustRemap;
    bool_forceMatchStyle;
    bool_varyInThemeStylesheet;
}

@property bool clientsMustRemap;
@property(readonly) NSSet * createdStyles;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool forceMatchStyle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) TSSStylesheet * targetStylesheet;

- (id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2;
- (bool)clientsMustRemap;
- (id)createRootStyleForStyle:(id)arg1 withPropertyMap:(id)arg2;
- (id)createdStyles;
- (void)dealloc;
- (bool)forceMatchStyle;
- (id)initWithTargetStylesheet:(id)arg1 newStyleDOLCContext:(id)arg2;
- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(bool)arg2;
- (id)mappedStyleForStyle:(id)arg1;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (void)setClientsMustRemap:(bool)arg1;
- (void)setForceMatchStyle:(bool)arg1;
- (bool)shouldMapParentOfStyle:(id)arg1;
- (id)stylesheetForNewRootStyleFromStyle:(id)arg1;
- (id)targetParentByContentTagMatchForStyle:(id)arg1;
- (id)targetParentByIdentifierExactMatchForStyle:(id)arg1;
- (id)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(id)arg1;
- (id)targetParentByNameMatchForStyle:(id)arg1;
- (id)targetParentForStyle:(id)arg1;
- (id)targetStylesheet;
- (void)varyInThemeStylesheetForDurationOfBlock:(id)arg1;
- (void)varyInThemeStylesheetIf:(bool)arg1 forDurationOfBlock:(id)arg2;

@end