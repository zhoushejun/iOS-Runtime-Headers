/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSData;

@interface _WKSessionState : NSObject {
    struct SessionState { 
        struct BackForwardListState { 
            struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow> { 
                struct BackForwardListItemState {} *m_buffer; 
                unsigned int m_capacity; 
                unsigned int m_size; 
            } items; 
            struct Optional<unsigned int> { 
                bool m_isEngaged; 
                union { 
                    unsigned int m_value; 
                } ; 
            } currentIndex; 
        } backForwardListState; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            int m_schemeEnd; 
            int m_userStart; 
            int m_userEnd; 
            int m_passwordEnd; 
            int m_hostEnd; 
            int m_portEnd; 
            int m_pathAfterLastSlash; 
            int m_pathEnd; 
            int m_queryEnd; 
            int m_fragmentEnd; 
        } provisionalURL; 
    } _sessionState;
}

@property(copy,readonly) NSData * data;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithSessionState:(struct SessionState { struct BackForwardListState { struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow> { struct BackForwardListItemState {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; struct Optional<unsigned int> { bool x_2_2_1; union { unsigned int x_2_3_1; } x_2_2_2; } x_1_1_2; } x1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; int x_2_1_4; int x_2_1_5; int x_2_1_6; int x_2_1_7; int x_2_1_8; int x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; } x2; })arg1;
- (id)data;
- (id)initWithData:(id)arg1;

@end
