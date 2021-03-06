/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class DOMDocument, DocumentContentState, NSMutableArray, NSMutableDictionary;

@interface RedundantContentCluster : NSObject
{
    DOMDocument *_document;
    DocumentContentState *_documentState;
    NSMutableArray *_redundantNodes;
    NSMutableArray *_wrappersInserted;
    NSMutableDictionary *_savedElementStyles;
    BOOL _isFirstContent;
    BOOL _isLastContent;
    BOOL _isHidden;
}

+ (id)clustersForDocumentState:(id)arg1;
- (id)initWithRedundantNodes:(id)arg1 documentState:(id)arg2 isFirstContent:(BOOL)arg3 isLastContent:(BOOL)arg4;
- (void)dealloc;
- (id)description;
- (id)nodeEnumerator;
- (id)reverseNodeEnumerator;
- (BOOL)heightExceedsThreshold:(double)arg1;
- (id)firstNode;
- (id)lastNode;
- (id)domRange;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)trimAttributionContentFromTop;
- (void)_saveElementStyle:(id)arg1;
- (void)_restoreElementStyle:(id)arg1;
- (void)hide;
- (void)show;
@property(nonatomic) BOOL isFirstContent; // @synthesize isFirstContent=_isFirstContent;
@property(nonatomic) BOOL isLastContent; // @synthesize isLastContent=_isLastContent;

@end

